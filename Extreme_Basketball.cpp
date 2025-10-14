// Problem Link : https://www.codechef.com/problems/BBWIN
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m; cin >> n >> m;
      int cnt = 0; 
      while (n - m < 10)
      {
         n += 3;
         cnt++;
      }

      cout << cnt << "\n";
      
   }
   

   return 0;
}