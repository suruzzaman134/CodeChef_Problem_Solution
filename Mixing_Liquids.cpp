#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b; cin >> a >> b;

      if(b != 1 && b % 2 != 0) b--;

      if(b <= 1) cout << 0 << "\n";
      else{
         if(a <= b / 2){
            cout << a + (a * 2) << "\n";
         }else{
            cout << b + (b / 2) << "\n";
         }
      }
   }
   

   return 0;
}