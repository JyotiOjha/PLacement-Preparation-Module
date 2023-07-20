#include<bits/stdc++.h>
using namespace std;

int major(vector<int>&v)
{  //Better approach
    int n =v.size();
    int ans=0;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
    }
    for(auto it:m)
    {
        if(it.second>n/2)
         {  ans = it.first;
           break;
         }
    }
    return ans;

    //Optimal approach : Moores Voting Algorithm

}
int main()
{int n;
    cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
int ans = major(v);
cout<<ans;
return 0;
}