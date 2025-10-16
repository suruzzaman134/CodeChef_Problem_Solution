// Problem Link : https://www.codechef.com/problems/MEXARR
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      long long n; cin >> n;
      vector<long long> v(n);
      for(long long i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());
      long long cnt = 0;
      for(int i = 0; i < n; i++){
         cnt += abs(v[i] - i);
      }

      cout << cnt << "\n";
   }
   

   return 0;
}