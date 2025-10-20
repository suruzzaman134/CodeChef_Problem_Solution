// Problem Link : https://www.codechef.com/problems/ENV
#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<long long> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];

      sort(v.begin(), v.end());
      long long sum = 0;
      for (int i = 0; i < n; i++)
      {
         if(i == 0 || v[i] == 1 || sum == 1) sum += v[i];
         else sum *= v[i];
         
         sum %= MOD;
      }

      cout << sum << "\n";
      
   }
   

   return 0;
}