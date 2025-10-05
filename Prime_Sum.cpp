// Problem Link : https://www.codechef.com/problems/PRIMESUM7
#include <bits/stdc++.h>
using namespace std;
int is_prime(int n){
   for(int i = 2; i * i <= n; i++){
      if(n % i == 0) return false;
   }
   return true;
};
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);

      

      for(int i = 0; i < n; i++) cin >> v[i];
      int ans = 0;
      for(int i = 0; i < n - 1; i++){
         for(int j = i + 1; j < n; j++){
            if(is_prime(v[i] + v[j])) ans++;
         }
      }

      cout << ans << "\n";
   }
   

   return 0;
}