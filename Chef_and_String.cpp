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
      string s, f; cin >> s;
      for(char ch: s) if(ch != 'I') f.push_back(ch);
      
      int ans = n * k - 1;

      if(f.size() == 0) cout << ans << "\n";
      else{
         int temp = 0;
         for(int i = 0; i < f.size() - 1; i++){
            if(f[i] != f[i+1]) temp++;
         }
         
         ans -= temp * k;
         if(f.front() != f.back()) ans -= k - 1;

         cout << ans << "\n";
      }

   }
   

   return 0;
}