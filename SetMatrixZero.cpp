 #include<bits/stdc++.h>
using namespace std;

void setmatrixzeroes(vector<vector<int>>&mat)
{
      int m = mat.size();
      int n = mat[0].size();
      vector<int>row;
      vector<int>col;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==0)
            {
               row.push_back(i);
               col.push_back(j);
            }
        }
      }
      for(int i=0;i<row.size();i++)
      {
        for(int j=0;j<n;j++)
        {
            mat[row[i]][j]=0;
        }
      }
       for(int i=0;i<col.size();i++)
      {
        for(int j=0;j<m;j++)
        {
            mat[j][col[i]]=0;
        }
      }
}
int main()
{
    int m,n;
    int val;
    cin>>m>>n;
    int i,j;
    vector<vector<int>>mt;
    for(i=0;i<m;i++)
    {
        vector<int>temp;
        for(j=0;j<n;j++)
        {
            cin>>val;
            temp.push_back(val);
        }
        mt.push_back(temp);
    }
    setmatrixzeroes(mt);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mt[i][j]<<" ";
        }
    }
    return 0;

}
