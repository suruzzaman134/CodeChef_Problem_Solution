// Problem Link : https://www.codechef.com/problems/MAX123
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;

      int takeTwo = (x + y) / 3;

      if(takeTwo <= y) cout << takeTwo * 2 << "\n";
      else{
         cout << (y * 2) + (takeTwo - y) << "\n";
      }
   }
   

   return 0;
}