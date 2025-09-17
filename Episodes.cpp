// Problem Link :  https://www.codechef.com/problems/EPISODES
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b; cin >> a >> b;

      int min = a * b;

      if(min < 60) cout << 0 << " " << min << "\n";
      else{
         cout << min / 60 << " " << min % 60 << "\n"; 
      }
   }
   


   return 0;
}