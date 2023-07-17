#include<bits/stdc++.h>
using namespace std;

bool valid(string s)
{
     stack<int> s1;
    map<char, char> m = {{')', '('}, {']', '['}, {'}', '{'}};
    for (auto &it : s)
    {
        if (it == '(' or it == '[' or it == '{')
            s1.push(it);
        else{
            if (s1.empty())
                return 0;
            else if (s1.top() == m[it])
                s1.pop();
            else
                return 0;
        }
    }
    if (s1.empty())
        return 1;
    else
        return 0;
}
int main()
{
    string s;
    cin>>s;
    
    cout<<valid(s);

    return 0;
}