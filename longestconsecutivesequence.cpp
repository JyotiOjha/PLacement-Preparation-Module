#include<bits/stdc++.h>
using namespace std;

int cons(vector<int>&v)
{
    /*int cnt=1;
    sort(v.begin(),v.end());
    int prev = v[0];
    int curr=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i] == prev+1){
                curr++;
            }
            else if(v[i] != prev){
                curr = 1;
            }
            prev = v[i];
            cnt = max(cnt, curr);
    }
    return cnt;*/
    //Optimal approach use hashset
    set<int>s;
    for(int i : v)
    {
        s.insert(i);
    }
    int cnt=0;
    for(int i : v)
    {
        if(!s.count(i-1))
        {  int curr = i;
        int curstreak =1;
        while(s.count(curr+1))
        {
            curr+=1;
            curstreak+=1;
        }
        cnt=max(cnt,curstreak);
        }
        
    }
    return cnt;
}
int main()
{  
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans = cons(v);
    cout<<ans;
    return 0;
}