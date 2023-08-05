#include<bits/stdc++.h>
using namespace std;
//Matrix is sorted

int findmedian(vector<vector<int>>&v,int m,int n)
{
    vector<int>ans;
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
        ans.push_back(v[i][j]);
       }
    }
    sort(ans.begin(),ans.end());
    return ans[ans.size()/2];
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>v(m, vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
int ans = findmedian(v,m,n);
cout<<ans;
return 0;
}