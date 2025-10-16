#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N, C;
        cin >> N >> C;
        vector<long long> B(N), D(N);
        for (int i = 0; i < N; i++) cin >> B[i];
        for (int i = 0; i < N; i++) cin >> D[i];

        long long ans = LLONG_MAX;
        for (int shift = 0; shift < N; shift++) {
            long long cost = (long long)shift * C;
            for (int i = 0; i < N; i++) {
                int j = (i + shift) % N;
                cost += B[j] * D[i];
            }
            ans = min(ans, cost);
        }
        cout << ans << "\n";
    }
}
