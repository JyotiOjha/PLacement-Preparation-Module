#include<bits/stdc++.h>
using namespace std;

void reversestring(vector<char>&s)
{
    reverse(s.begin(),s.end());
}
int main()
{   int n;
cin>>n;
    vector<char>s(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
reversestring(s);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;

}