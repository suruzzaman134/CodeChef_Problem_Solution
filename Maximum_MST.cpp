#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      int m = (n * (n - 1)) / 2;
      vector<int> v(m);

      for(int i = 0; i < m; i++) cin >> v[i];

      sort(v.begin(), v.end());
      int sum = 0;
      for(int i = 0; i < n - 1; i++) sum += v[i];

      cout << sum << "\n";
   }
   


   return 0;
}