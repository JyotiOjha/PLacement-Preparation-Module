#include<bits/stdc++.h>
using namespace std;

vector<int>smallvec(vector<int>&v)
{
    vector<int>ans;
   /* for(int i=v.size()-1;i>=0;i--)
    {
         for(int j=i-1;j>=0;j--)
         {
            if(v[i]>v[j])
              {
                ans.push_back(v[j]);
                break;
              }
         }
         ans.push_back(-1);
    }*/
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
         for(int j=i+1;j<v.size();j++)
         {
            if(v[i]>v[j])
              {
                ans.push_back(v[j]);
                break;
              }
         }
         ans.push_back(-1);
    }
    reverse(ans.begin(),ans.end());
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
   vector<int>ans = smallvec(v);
   for(int i=0;i<n;i++)
   {
       cout<<ans[i]<<" ";
   }
   return 0;
}