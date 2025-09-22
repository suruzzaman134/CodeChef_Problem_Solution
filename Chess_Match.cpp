// Problem Link : https://www.codechef.com/problems/BLITZ3_2
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int turn, a, b; cin >> turn >> a >> b;

      int time_left = a + b;

      cout << (2 * (180 + turn)) - time_left << "\n";

   }
   

   return 0;
}