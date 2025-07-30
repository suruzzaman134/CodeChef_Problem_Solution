#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        vector<vector<int>> freq(4, vector<int>(n + 2, 0));  

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            for (int k = 1; k <= 3; k++) {
                freq[k][i] = freq[k][i - 1];
            }
            freq[v[i]][i]++;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            int len = r - l + 1;
            if (len % 2 != 0) {
                cout << "No\n";
                continue;
            }

            int max_freq = 0;
            for (int k = 1; k <= 3; k++) {
                int count = freq[k][r] - freq[k][l - 1];
                max_freq = max(max_freq, count);
            }

            if (max_freq > len / 2) cout << "No\n";
            else cout << "Yes\n";
        }
    }

    return 0;
}
