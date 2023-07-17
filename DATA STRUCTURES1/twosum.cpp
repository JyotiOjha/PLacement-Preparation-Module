#include<bits/stdc++.h>
using namespace std;
vector<int>twosum(vector<int>&v,int val)
{
   vector<int>ans;
   for(int i=0;i<v.size();i++)
   {
      for(int j=i+1;j<v.size();j++)
      {
        if(v[i]+v[j]==val)
          {
            ans.push_back(i);
            ans.push_back(j);
            break;
          }
      }
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
 int val;
    cin>>val;
    vector<int>ans;
    ans  = twosum(v,val);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}