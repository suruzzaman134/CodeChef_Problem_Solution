#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      int odd = 0, even = 0;

      for(int i = 0; i < n; i++){
         int x; cin >> x;
         if(x % 2 == 0) even++;
         else odd++;
      }

      if(odd > 1 || odd == 0) cout << "No" << "\n";
      else cout << "Yes" << "\n";
   }
   

   return 0;
}