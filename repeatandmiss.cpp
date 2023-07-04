#include<bits/stdc++.h>
using namespace std;

vector<int>sol(vector<int>&v)
{
    /**vector<int>ans;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {   
        if(v[i]==v[i+1])
          ans.push_back(v[i]);
        
    }
    unique(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i+1]-v[i]>1)
          ans.push_back(v[i]+1);
    }
    if(ans[1]==NULL)
    {ans.push_back(v[v.size()]+1);}

    return ans;**/
    vector<int>ans;
    int m[v.size()+1]={0};
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    for(int i=1;i<=v.size();i++)
    {
        if(m[i]==2) ans.push_back(i);
        if(m[i]==0) ans.push_back(i);
    }
    return ans;
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
    vector<int>ans = sol(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}