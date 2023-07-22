#include<bits/stdc++.h>
using namespace std;

vector<int>twosum2(vector<int>&num,int n,int k)
{   
    vector<int>ans;
        int l=0,r=num.size()-1;
        while(l<r)
        {
            if(num[l]+num[r]==k)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if(num[l]+num[r]<k)
            {
                l++;
            }
            else if(num[l]+num[r]>k)
            {
                r--;
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
    int k;
    cin>>k;
    vector<int>ans = twosum2(v,n,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}