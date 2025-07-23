#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, c; cin >> n >> c;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];

      int cnt = 0;

      while (true)
      {
         bool less = false;
         bool duplicate = false;

         for (int i = 0; i < n; i++) {
            if (v[i] < c) less = true;
            if (v[i] == c) duplicate = true;
         }

         if (less && !duplicate) {
            cout << cnt << "\n";
            break;
         }

         cnt++;
         c++;
      }
   }

   return 0;
}
