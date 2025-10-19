// Problem Link : https://www.codechef.com/problems/SWMA
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int alice, bob; cin >> alice >> bob;

      int temp_alice = alice, temp_bob = bob;
      int n_alice = (temp_alice % 10) * 10;
      temp_alice /= 10;
      n_alice += temp_alice % 10;

      int n_bob = (temp_bob % 10) * 10;
      temp_bob /= 10;
      n_bob += temp_bob % 10;

      if(alice > bob || alice > n_bob || n_alice > bob || n_alice > n_bob) cout << "Yes" << "\n";
      else cout << "No" << "\n";
   }
   

   return 0;
}