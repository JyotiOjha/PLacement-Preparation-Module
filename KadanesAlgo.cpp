//Find subarray with largest sum
#include<bits/stdc++.h>
using namespace std;

int maxsum(vector<int>&v)
{
   /* BRUTE FORCE - Complexity = O(n^3)
   int maxi = INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i;j<v.size();j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=v[k];
            }
            maxi = max(maxi,sum);
        }
    }
    return maxi;**/
    /*Better approach : Eliminate the third loop by storing the sum of array traversed till the time and adding it to the current element
      Complexity = O(n^2)
    int maxi = INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        int sum=0;
        for(int j=i;j<v.size();j++)
        {
            sum = sum+v[j];
            maxi = max(maxi,sum);
        }
    }
    return maxi;
    */
   //Optimized approach : Ignore the subarrays with negative sum and set the value of sum to 0 again
   //Complexity = O(n)
   int maxi = INT_MIN;
   int sum=0;
   for(int i=0;i<v.size();i++)
   {
      sum+=v[i];
    maxi = max(maxi,sum);
      if(sum<0)
      {
        sum=0;
      }
    
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