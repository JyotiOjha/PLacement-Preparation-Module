#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<int>&v)
{
   int buy = INT_MAX;
   int profit = 0;
   for(int i=0;i<v.size();i++)
   {
      buy = min(buy,v[i]);//everytime a small price is achieved it is set to buy
      profit = max(profit,v[i]-buy);//the maximum profit is calculated for each buy
   }
   return profit;
}

int main()
{
    int n;
    cin>>n;
    vector<int>price(n);
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    int ans = maxprofit(price);
    cout<<ans;
    return 0;
}