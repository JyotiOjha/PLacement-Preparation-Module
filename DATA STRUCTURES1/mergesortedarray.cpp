#include<bits/stdc++.h>
using namespace std;

void mergearray(vector<int>&a,vector<int>&b)
{
     for(int i=0;i<b.size();i++)
     {
        a.push_back(b[i]);
     }
     sort(a.begin(),a.end());
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

   mergearray(a,b);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}