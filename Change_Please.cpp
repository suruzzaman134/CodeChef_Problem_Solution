// Problem Link : https://www.codechef.com/problems/CHANGE_PLZ
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      int remaining = 100 - n;

      int back = (remaining / 10) * 10;

      cout << back << "\n";
   }
   

   return 0;
}