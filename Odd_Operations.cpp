// Problem Link : https://www.codechef.com/problems/LMP3
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 

vi v;

void digit(int n){
   if(n == 0) return;
   int ele = n % 10;
   digit(n/10);
   v.push_back(ele);
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      v.clear(); 
      digit(n);
      if(n % 2 == 1){
         cout << 0 << "\n";
         continue;
      }
      if(n/10==0 && n%2==0) {
         cout << -1 << "\n";
         continue;
      }
      
      bool odd = false, increasing_order = true, last_zero = false;
      if(v[v.size() - 1] == 0) last_zero = true;

      for(int i = 0; i < v.size() - 1; i++){
         if(v[i] % 2 == 1){
            odd = true;
            break;
         }
         if(v[i] > v[i+1]){
            increasing_order = false;
         }
      }
      if(!last_zero){
         if(v[v.size() - 1] % 2 == 1) odd = true;
         if(v[v.size() - 2] > v[v.size() - 1]){
            increasing_order = false;
         }
      }

      if(odd) cout << 1 << "\n";
      else if(last_zero || !increasing_order) cout << 2 << "\n";
      else if(increasing_order) cout << 3 << "\n";
      else cout << -1 << "\n";
      
   }
   


   return 0;
}