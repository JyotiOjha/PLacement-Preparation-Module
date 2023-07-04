#include<bits/stdc++.h>
using namespace std;
//Transpose the matrix and then reverse it
vector<vector<int>>rotate(vector<vector<int>>&v)
{
   for(int i=0;i<v.size();i++)
   {
    for(int j=0;j<i;j++)
    {
        swap(v[i][j],v[j][i]);
    }
   }
   for(int i=0;i<v.size();i++)
   {
    reverse(v[i].begin(),v[i].end());
   }
   return v;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }

    rotate(v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
    }



}