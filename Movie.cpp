// Problem Link : https://www.codechef.com/problems/MOVIE7
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
      int n, m, a, b, c; cin >> n >> m >> a >> b >> c;
      int cst = min(n, m) * c;
      if(n > m){
         cst += (n - m) * a;
      }else if(m > n){
         cst += (m - n) * b;
      }
      cout << cst << endl;
   }
   

   return 0;
}