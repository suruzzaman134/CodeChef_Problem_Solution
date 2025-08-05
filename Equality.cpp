#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<long long> v(n);

      long long sum = 0;
      for(int i = 0; i < n; i++){
         long long x; cin >> x;
         v[i] = x;
         sum += x;
      }
      sum /= n - 1;
      for(int i = 0; i < n; i++){
         cout << sum - v[i] << " ";
      }

      cout << "\n";
   }
   

   return 0;
}