#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>mergeintervals(vector<vector<int>>&v)
{
    vector<vector<int>>ans;
    sort(v.begin(),v.end());
    vector<int>temp = v[0];
    for(auto it : v)
    {
        if(temp[1]>=it[0])
        {
            temp[1] = max(temp[1],it[1]);

        }
        else
        {
            ans.push_back(temp);
            temp = it;
        }
    }
    ans.push_back(temp);
    return ans;
}
int main()
{
    int m;
    int n;
    cin>>m>>n;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }

    vector<vector<int>>ans = mergeintervals(v);
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;

}