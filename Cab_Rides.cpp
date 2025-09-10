// Problem Link : https://www.codechef.com/START203D/problems/CABRIDE
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      int cost = 0;
      if(n > 4 && n % 4 == 1){
         cost = max(200, (n - 2) * 100);
         cost += 200;
      }else{
         cost = max(200, 100 * n);
      }

      cout << cost << "\n";

   }
   


   return 0;
}