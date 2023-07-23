#include<bits/stdc++.h>
using namespace std;

string reversestring(string s)
{
     string st="";
        stack<string>v;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                st+=s[i];
            }
            else
             {
                if (!st.empty())
                 {
                    v.push(st);
                    st = "";
                }
             }
        }
        if (!st.empty()) {
            v.push(st);
        }
        string ans="";
       while(!v.empty())
        {
            ans += v.top();
            v.pop();
            if (!v.empty()) {
                ans += " ";
            }
        }
        return ans;
}
int main()
{
    string s;
    getline(cin,s);

   string ans= reversestring(s);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
   return 0;
    
}