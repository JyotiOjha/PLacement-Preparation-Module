#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&v)
{   int ans;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i+1])
           {
            ans = v[i];
            break;

           }
    }
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
    int ans  = find(v);
    cout<<ans;
    return 0;
}