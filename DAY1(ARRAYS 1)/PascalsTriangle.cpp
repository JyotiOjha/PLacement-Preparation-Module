#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>generate(int num)
{
   vector<vector<int>>ans(num);
   for(int i=0;i<num;i++)
   {        ans[i].resize(i+1);//Every row in pascals triangle contains i+1 elements
            ans[i][0] = ans[i][i]=1;
            for(int j=1;j<i;j++)
            {
                ans[i][j]= ans[i-1][j] + ans[i-1][j-1];
            }
        }
        return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>sol = generate(n);
    for(int i=0;i<sol.size();i++)
    {
       for(int j=0;j<sol[i].size();j++)
       {
        cout<<sol[i][j]<<endl;
       }
    }
    return 0;    

}