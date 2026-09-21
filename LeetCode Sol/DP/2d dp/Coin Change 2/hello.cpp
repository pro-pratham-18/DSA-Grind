#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();

        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

        // 1 way to make amount 0: choose nothing
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {

                int coin = coins[i - 1];

                if (coin <= j) {
                    dp[i][j] = dp[i][j - coin] + dp[i - 1][j];
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][amount];
    }
};

int main(){
    
    return 0;
}