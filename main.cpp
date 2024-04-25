#include<iostream>
#include<vector>
using namespace std;

int main() {

    int m, n;
    cin >> m >> n;
    vector<vector<int>>dp(m + 1, vector<int>(n + 1, 1));
    //int dp[m][n];
    /*for (int i = 0; i < m; i++) {
        dp[i][0] = 1;
    }
    for (int i = 0; i < n; i++) {
        dp[0][i] = 1;
    }
    dp[0][0] = 1;*/

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    cout << dp[m - 1][n - 1] << endl;
    return 0;
}

