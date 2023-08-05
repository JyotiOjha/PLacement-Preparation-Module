#include<bits/stdc++.h>
using namespace std;

int findvalue(vector<int>&v1,vector<int>&v2,int k)
{
   for(int i=0;i<v2.size();i++)
   {
    v1.push_back(v2[i]);
   }
   sort(v1.begin(),v1.end());
   return v1[k-1];
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>v1(m);
    vector<int>v2(n);
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    int k;
    cin>>k;
    int ans = findvalue(v1,v2,k);
    cout<<ans;
    return 0;
}