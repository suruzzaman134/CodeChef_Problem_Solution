#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;
      int sum_e = 0, sum_o = 0;
      for(int i = 1; i <= y; i++){
         if(i % x == 0){
            if(i % 2 == 0) sum_e += i;
            else sum_o += i;
         }
      }

      if(sum_e >= sum_o) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}