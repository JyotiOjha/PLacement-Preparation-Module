#include<bits/stdc++.h>
using namespace std;

vector<int>nextpermutation(vector<int>&a)
{
    next_permutation(a.begin(),a.end());
    return a;
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

    nextpermutation(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

    return 0;
}