#include<bits/stdc++.h>
using namespace std;

vector<int>intersection(vector<int>&a,vector<int>&b)
{  
   /* vector<int>ans;
   for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
              { ans.push_back(a[i]);
              break;
              }
        }
    }
    return ans;*/
     map<int,int>m;
        vector<int>ans;
        for(int i = 0;i<a.size();i++){
            m[a[i]]++;
        }
        for(int i = 0;i<b.size();i++){
            if (m[b[i]] > 0/*Checks that element lies already in map or not*/){
                m[b[i]]--; /*If present decrease freq by 1*/
                ans.push_back(b[i]);/*Found element is common store it in ans*/
            }
        }
        return ans;
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>a(m);
    vector<int>b(n);

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<int>ans=intersection(a,b);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;

}