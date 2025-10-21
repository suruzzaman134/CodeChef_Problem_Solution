// Problem Link : https://www.codechef.com/problems/MXALT
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());
      long long max_sum = 0, min_sum = 0;
      int i = 0;
      for(; i < n / 2; i++){
         min_sum += v[i];
      }

      for(; i < n; i++){
         max_sum += v[i];
      }

      cout << max_sum - min_sum << "\n";
   }
   

   return 0;
}