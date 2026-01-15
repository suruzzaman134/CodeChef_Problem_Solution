// Problem Link : https://www.codechef.com/problems/DIFFVAL
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      string s; cin >> s;
      int zero = count(s.begin(), s.end(), '0');
      int one = n - zero;

      if(max(zero, one) <= k) cout << "Yes\n";
      else cout << "No\n";
   }
   

   return 0;
}