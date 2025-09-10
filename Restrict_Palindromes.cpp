#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      char ch = 'a';
      for(int i = 0; i < n; i++){
         cout << ch;
         if(ch == 'd') ch = 'a';
         ch++;
      }
      cout << "\n";
   }
   

   return 0;
}