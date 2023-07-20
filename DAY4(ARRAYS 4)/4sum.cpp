#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>foursum(vector<int>&v,int val)
{
    sort(v.begin(),v.end());
    //Four pointer approach (excluded hash set)
    //Fix two pointers i and j at first and second ele and keep two moving pointers k and l at third and last ele respectively
    //Now increment and decrement k and l as per requirement
    //Skip all the duplicates
    //After one move that is k and l cross each other stop and increment j to next different value
    //After traversal of j now increment i
    vector<vector<int>>ans;
    for(int i=0;i<v.size();i++)
    {   if(i>0 && v[i]==v[i-1]) continue;//For duplicates
        for(int j=i+1;j<v.size();j++)
        {  if(j>i+1 && v[j]==v[j-1]) continue; //For duplicates
           int k =j+1;
           int l = v.size()-1;
           while(k<l)
           {
            long long sum = v[i];
            sum+=v[j];
            sum+=v[k];
            sum+=v[l];
            if(sum==val)
            {
                vector<int>temp = {v[i],v[j],v[k],v[l]};
                ans.push_back(temp);
                k++;
                l--;
                while(k<l && v[k]==v[k-1]) k++;
                while(k<l && v[l]==v[l+1]) l--;
            }
            else if(sum<val) k++;
            else l--;

           }
        }
    }
    return ans;
    
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
    int val;
    cin>>val;
    
    vector<vector<int>>ans = foursum(v,val);
    for(auto it:ans)
    {
        for(auto m : it)
        {
            cout<<m<<" ";
        }
    }
    return 0;
}