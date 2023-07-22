#include<bits/stdc++.h>
using namespace std;

vector<int>squaresorted(vector<int>&v,int n)
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {   
        
        ans.push_back(v[i]*v[i]);
    }
    sort(ans.begin(),ans.end());
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
    vector<int>ans = squaresorted(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}