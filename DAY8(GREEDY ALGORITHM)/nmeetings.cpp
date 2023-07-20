#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
vector<int>numberofmeets(vector<int>&s,vector<int>&e,int n)
{
    /*sort(e.begin(),e.end());
     vector<int>ans;
     ans.push_back(1);
     int limit = e[0];
     for(int i=1;i<n;i++)
     {
        if(s[i]>=limit)
        {
            ans.push_back(i+1);
            limit = e[i];
        }
     }
     return ans;*/
     vector<pair<int,int>>v;
     for(int i=0;i<n;i++)
     {
        pair<int,int> p = make_pair(s[i],e[i]);
        v.push_back(p);

     }
     sort(v.begin(),v.end(),cmp);

}

int main()
{
   int n;
   cin>>n;
   vector<int>s(n);
   vector<int>e(n);
   for(int i=0;i<n;i++)
   {
    cin>>s[i];
   }
   for(int i=0;i<n;i++)
   {
    cin>>e[i];
   }

   vector<int>ans = numberofmeets(s,e,n);
   for(int i=0;i<ans.size();i++)
   {
      cout<<ans[i]<<" ";
   }

   return 0;
}