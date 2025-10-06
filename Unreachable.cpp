// Problem Link : https://www.codechef.com/problems/BLREACH
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        bool odd_one = false, even_one = false;

        for(int i = 1; i <= n; i++){
            int x; 
            cin >> x;
            if(x == 1){
                if(i % 2 != 0) odd_one = true;
                else even_one = true;
            }
        }

        if(odd_one && even_one) cout << "No\n"; 
        else cout << "Yes\n";                   
    }

    return 0;
}
