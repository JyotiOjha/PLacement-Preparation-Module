/*#include<bits/stdc++.h>
using namespace std;




int main()
{
    int m,n;
    cin>>m>>n;
    int cnt=0;
   while(n!=1)
    {   
         if(n%m==0)
         {  n = n/m;
            cnt++;
         }
         else{
            break;
         }
        
    }

    if(cnt>0)
    {
        cout<<cnt;
    }
    else
    {
      cout<<"-1";
    }
    
  
    return 0;

}*/
#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

bool isNthRoot(int m, int n, int x) {
    return (pow(x, n) - m) <= 1e-9; // Adjust epsilon as needed
}

int main() {
    int m, n;
    cin >> m >> n;

    if (m <= 0 || n <= 0) {
        cout << "-1";
        return 0;
    }

    int left = 1, right = m; // Binary search range

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (isNthRoot(m, n, mid)) {
            cout << mid;
            return 0;
        } else if (pow(mid, n) < m) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << "-1"; // If no valid nth root is found
    return 0;
}
