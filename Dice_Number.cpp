// Problem Link : https://www.codechef.com/problems/DICENUM
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      vector<int> a(3), b(3);

      for(int i = 0; i < 3; i++) cin >> a[i];
      for(int i = 0; i < 3; i++) cin >> b[i];


      sort(a.begin(), a.end(), greater<int>());
      sort(b.begin(), b.end(), greater<int>());
      
      int mul = 100;
      int alice = 0, bob = 0;

      for(int x : a){
         alice += x * mul;
         mul /= 10;
      }

      mul = 100;

      for(int x : b){
         bob += x * mul;
         mul /= 10;
      }
      

      if(alice > bob) cout << "Alice" << "\n";
      else if(bob > alice) cout << "Bob" << "\n";
      else cout << "Tie" << "\n";
   }
   

   return 0;
}