#include<bits/stdc++.h>
using namespace std;
bool duplicate(vector<int>&v)
{   
    /**map<int,int>m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    for(auto it : m)
    {
        if(it.second > 1)
          return true;
          break;
    }
    return false;**/
    //Optimal solution use set
    unordered_set<int>s;
    for(int num : v)
    {
        if(s.count(num)>0)
        {
            return true;//Found duplicate element
        }
        s.insert(num);
    }
    return false;
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
    bool ans = duplicate(v);
    cout<<ans;
    return 0;
}