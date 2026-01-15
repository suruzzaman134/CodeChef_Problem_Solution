// Problem Link : https://www.codechef.com/problems/P2HOME
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
   vi a(n), b(n);
   vec_in(a);
   vec_in(b);
   if(n == 1){
      cout << "Yes" << "\n";
      continue;
   }
   bool ok = true;
   for(int i = 0; i < n - 1; i++){
      if((a[i] > a[i+1] && b[i] < b[i+1]) || (a[i] < a[i+1] && b[i] > b[i+1]) || abs(b[i] - b[i+1]) == 0){
         ok = false;
      }
      if(!ok) break;
   }
   if(ok) cout << "Yes" << "\n";
   else cout << "No" << "\n";
   }
   
   return 0;
}