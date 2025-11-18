// Problem Link : https://www.codechef.com/problems/P7BAR?tab=statement
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " ";

void solve() {
   
    int ans=0;
    int n;cin>>n;
    vi arr(n);
    vec_in(arr);
    set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!= s.end()){
            s.clear();
            ans++;
            s.insert(arr[i]);
        }
        else{
            s.insert(arr[i]);
        }
    }
    
    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}