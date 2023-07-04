#include<bits/stdc++.h>
using namespace std;

void sortcolors(vector<int>&v)
{
    int low=0;//represents 0
    int mid=0;//represents 1
    int high = v.size()-1;//represents 2
    while(mid<=high)
    {
        if(v[mid]==0)//if at mid we get value 0 swap it with low to get 1 if present
        {
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==1)//if mid = 1 leave it as it is only increment the mid
        {
            mid++;
        }
        else{//if mid value is 2 swap it with high index to get 1 and send 2
            swap(v[mid],v[high]);
            high--;
        }
    }
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

    sortcolors(v);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}