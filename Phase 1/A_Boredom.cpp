#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> cnt(100005, 0);
    int max_num = 0;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        cnt[num]++;
        max_num = max(max_num, num);
    }

    vector<long long> dp(max_num + 1, 0);

    dp[1] = cnt[1];

    for (int i = 2; i <= max_num; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + 1LL * cnt[i] * i);
    }

    cout << dp[max_num] << endl;

    return 0;
}
