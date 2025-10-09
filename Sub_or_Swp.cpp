// Problem Link : https://www.codechef.com/problems/ASM120
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;
      cout << __gcd(x, y) << "\n";
      
   }
   
   

   return 0;
}