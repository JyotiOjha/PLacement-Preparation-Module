#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>&v,int val)
{
  //Brute Force : Compare each element by traversing the matrix
  /*int cnt=0;
  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<v[0].size();j++)
    {
       if(v[i][j]==val)
        {  cnt++;
          break;
        }
    }
  }
  if(cnt==0)
    return false;
  else
   return true;*/
   //Optimal : Binary Search since the given matrix will have sorted values
   int m = v.size();
   int n = v[0].size();
   int low = 0;
   int high = (m*n)-1;
   while(low<=high)
   {
    int mid = (low+high)/2;
    if(v[mid/m][mid%m]==val)
      return true;
    if(v[mid/m][mid%m]<val)
       low = mid+1;
    else 
      high = mid-1;
    
   }
   return false;

}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>v(m,vector<int>(n));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    int val;
    cin>>val;
    search(v,val);
    cout<<search(v,val);
    return 0;
}