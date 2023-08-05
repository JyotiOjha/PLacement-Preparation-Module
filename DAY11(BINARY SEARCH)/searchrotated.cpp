#include<bits/stdc++.h>
using namespace std;

int findindex(vector<int>&v,int target)
{   
    int cnt = -1;
    for(int i=0;i<v.size();i++)
    {
         if(v[i]==target)
           {
            cnt = i;
            break;
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
    int target;
    cin>>target;
    int ans = findindex(v,target);
    cout<<ans;
    return 0;
}