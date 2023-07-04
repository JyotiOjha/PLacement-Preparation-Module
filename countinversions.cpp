#include<bits/stdc++.h>
using namespace std;

int inverse(vector<int>&v)
{
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
              cnt++;
        }
    }
    return cnt;
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

    int ans = inverse(v);
    
    cout<<ans;
    return 0;
}