// Problem Link : https://www.codechef.com/problems/GCEA
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, x, y; cin >> n >> x >> y;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];

      int cost = 0;
      for(int i = 0; i < n; i++){
         if(x*v[i] < y) cost += x * v[i];
         else cost += y;
      }

      cout << cost << "\n";
   }
   

   return 0;
}