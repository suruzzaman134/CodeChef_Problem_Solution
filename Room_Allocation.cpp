// Problem Link : https://www.codechef.com/problems/ROOMALLOC
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      int room = 0;
      for(int i = 0; i < n; i++){
         room += (v[i] + 1) / 2;
      }

      cout << room << "\n";
   }
   

   return 0;
}