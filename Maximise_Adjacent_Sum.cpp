// Problem Link : https://www.codechef.com/problems/MAXADJSUM
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
                long long sum = 0;
        long long totalSum = accumulate(arr.begin(), arr.end(), 0LL);
        long long result = 2 * totalSum - arr[0] - arr[1];

        cout << result << endl;
    }
    return 0;
}