// Problem Link : https://www.codechef.com/problems/GLADFIGHT?tab=statement
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;

      cout << n - 2 << " " << ((n - 2) * (n - 1)) / 2 << "\n";
   }
   

   return 0;
}