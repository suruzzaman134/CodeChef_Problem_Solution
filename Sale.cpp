// Problem Link : https://www.codechef.com/problems/FINALSALE
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
      for(int i = 0; i < n; i++) cin >> v[i];
      long long sum = 0;
      long long max_sum = INT_MIN;
      for(int i = 0; i < n; i++){
         sum += v[i];
         max_sum = max(max_sum , (sum - v[i]) + (v[i] * 2));
      }

      cout << max_sum << "\n";
   }
   

   return 0;
}