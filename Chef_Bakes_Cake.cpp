// Problem Link : https://www.codechef.com/problems/CHEFBAKES77
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

   
      int n, x, y; cin >> n >> x >> y;

      int p = (y / x);
      if(n % p == 0) cout << n / p;
      else cout << n / p + 1;
   
   

   return 0;
}