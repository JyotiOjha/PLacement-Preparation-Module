#include<bits/stdc++.h>
using namespace std;

double power(double x,int n)
{
   /* double ans = 1.00000;
    for(int i=0;i<n;i++)
    {
        ans *=x;
    }
    return ans;**/
    double ans = 1.0;
    long long neg = n;
    if(neg<0) neg= -1*neg;//Make the negative as positive
    while(neg)
    {
        if(neg%2)
        {
            ans*=x;
            neg--;
        }
        else{
            x*=x;
            neg/=2;
        }
    }
    if(n<0) ans=double(1.0)/double(ans);
    return ans;

}
int main()
{
    double x;
    int n;
    cin>>x;
    cin>>n;
   double ans = power(x,n);
    cout<<ans;
    return 0;
}