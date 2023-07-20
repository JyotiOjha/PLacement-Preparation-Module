#include<bits/stdc++.h>
using namespace std;

int ksum(vector<int>&v,int val)
{
   
    
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
    cout<<ksum(v,val);
   
    return 0;
}