#include<bits/stdc++.h>
using namespace std;

int findsingle(vector<int>&v)
{
    map<int,int>m;
    int sol;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    for(auto it : m)
    {
        if(it.second==1)
        {
           sol = it.first;
           break;
        }
    }
    return sol;
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
    int ans = findsingle(v);
    cout<<ans;
    return 0;
}