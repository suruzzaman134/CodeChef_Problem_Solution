// Problem Link : https://www.codechef.com/problems/LARGESTK343
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;
      cout << y / (x - 1) << "\n";
   }
   

   return 0;
}