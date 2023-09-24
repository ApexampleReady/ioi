#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        vector<long long> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            dp[i] = dp[i + 1];
            if ((s[i] - '0') != (i % 2)) {
                dp[i]++;
            }
        }

        long long min_ops = dp[0];
        long long num_sequences = 1;

        for (int i = 0; i < n; i++) {
            if ((s[i] - '0') == (i % 2)) {
                min_ops = min(min_ops, dp[i + 1] + 1);
            }
        }

        for (int i = 0; i < n; i++) {
            if ((s[i] - '0') == (i % 2)) {
                long long cnt = 1;
                int j = i + 1;
                while (j < n && s[j] != s[i]) {
                    j++;
                    cnt++;
                }
                num_sequences = (num_sequences * cnt) % MOD;
            }
        }

        cout << min_ops << " " << num_sequences << endl;
    }

    return 0;
}
