#include<bits/stdc++.h>
using namespace std;

int findlength(string s)
{   //Doesn't work for all the test cases
    /* string st="";
     int cnt=0;
     for(int i=0;i<s.size();i++)
     {
        if(st.find(s[i]) != string::npos)
        {
            st="";
            st+=s[i];
        }
        else{
            st+=s[i];
            int k = st.size();
            
            cnt = max(cnt,k);
        }
     }
     return cnt;*/

     int maxLength = 0;
    int left = 0;
    int right = 0;
    int n = s.length();
    unordered_set<char> charSet;

    while (right < n)
    {
        char currentChar = s[right];
        if (charSet.find(currentChar) == charSet.end())
        {
            charSet.insert(currentChar);
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        else
        {
            charSet.erase(s[left]);
            left++;
        }
    }

    return maxLength;

}
int main()
{
    string s;
    cin>>s;
    int ans  = findlength(s);
    cout<<ans;
    return 0;
}