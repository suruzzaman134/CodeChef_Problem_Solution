// Problem Link : https://www.codechef.com/problems/STRONGTABLE
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
      int max_w = INT_MIN;
      int total_weight = 0;
      int mul = 1;
      for(int i = n - 1; i >= 0; i--){
         total_weight += v[i];
         max_w = max(v[i] * mul, max_w);
         mul++;
         
      }

      cout << max_w << "\n";
   }
   

   return 0;
}