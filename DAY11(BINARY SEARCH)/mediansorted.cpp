#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
         if (n % 2 != 0)
             return (double)nums1[n / 2];
 
         return (double)(nums1[(n - 1) / 2] + nums1[n / 2]) / 2.0;
}

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int>v1(m);
    vector<int>v2(n);
    for(int i=0;i<m;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    double ans = findMedianSortedArrays(v1,v2);
    cout<<ans;
    return 0;
}