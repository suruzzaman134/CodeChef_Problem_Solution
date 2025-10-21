// Problem Link : https://www.codechef.com/problems/FARMLEGS
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int l; cin >> l;

      int cow = l / 4;
      int chicken = (l % 4) / 2;

      cout << cow + chicken << "\n";
   }
   

   return 0;
}