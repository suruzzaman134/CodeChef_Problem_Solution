// Problem Link : https://www.codechef.com/problems/P5HOME
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
      int n; cin >> n;
      if(n < 4) cout << 0 << "\n";
      else {
         int ans = 0;
         for(int i = n - 3; i >= 0; i -= 2){
            ans += i;
         }

         cout << ans << "\n";
      }
      
   }
   

   return 0;
}