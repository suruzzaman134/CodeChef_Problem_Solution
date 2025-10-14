// Problem Link : https://www.codechef.com/problems/SUPINC
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      long long x; cin >> x;
      vector<long long> v(k + 1);
      long long curr_sum = 0;
      for(int i = 1; i <= k; i++){
         v[i] = curr_sum + 1;
         curr_sum += v[i];
      }
      if(k>32) cout << "No\n";
      else if(v[k] > x) cout << "No" << "\n";
      else cout << "Yes" << "\n";

   }
   

   return 0;
}