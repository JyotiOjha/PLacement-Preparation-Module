#include<bits/stdc++.h>
using namespace std;

int maxsum(vector<int>&v)
{
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        maxi = max(maxi,sum);
        if(sum<0)
           sum=0;
    }
    return maxi;
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

    int ans = maxsum(v);
    cout<<ans;
    return 0;
}