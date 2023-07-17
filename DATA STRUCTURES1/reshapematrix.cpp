#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> reshape(vector<vector<int>>& v, int r, int c, int m, int n) {
    queue<int> q;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            q.push(v[i][j]);
        }
    }
    if (m * n == r * c) {
        vector<vector<int>> res(r, vector<int>(c));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int temp = q.front();
                q.pop();
                res[i][j] = temp;
            }
        }
        return res;
    }
    return v;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    int r, c;
    cin >> r >> c;

    vector<vector<int>> res = reshape(v, r, c, m, n);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
