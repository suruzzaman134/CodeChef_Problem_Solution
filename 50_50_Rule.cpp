// Problem Link : https://www.codechef.com/problems/NGRS
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b; cin >> a >> b;
      if(a < 50) cout << 'Z' << "\n";
      else if(b < 50) cout << 'F' << "\n";
      else cout << 'A' << "\n";
   }
   

   return 0;
}