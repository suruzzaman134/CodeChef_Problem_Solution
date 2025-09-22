// Problem Link : https://www.codechef.com/problems/LUCKYFR
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;

      int cnt = 0;
      while (n > 0)
      {
         if(n % 10 == 4) cnt++;
         n /= 10;
      }

      cout << cnt << "\n";
      
   }
   

   return 0;
}