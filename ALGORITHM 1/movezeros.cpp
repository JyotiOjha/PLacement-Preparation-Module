#include<bits/stdc++.h>
using namespace std;

void move(vector<int>&v,int n)
{   
    int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                swap(v[i],v[count]);
                count++;
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
    int k;
    move(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}