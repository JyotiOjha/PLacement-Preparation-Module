 #include<bits/stdc++.h>
 using namespace std;

 vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it : m)
        {
            if(it.second>n/3)
              {
                  ans.push_back(it.first);
              }
        }
        return ans;
    }

    int main()
{int n;
    cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
vector<int>ans  = majorityElement(v);
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
return 0;
}