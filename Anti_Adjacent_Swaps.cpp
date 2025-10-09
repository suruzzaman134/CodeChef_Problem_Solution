// Problem Link : https://www.codechef.com/problems/ANADSW
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

      if(n == 1) cout << "YES" << "\n";
      else if(n == 2){
         if(v[0] <= v[1]) cout << "YES" << "\n";
         else cout << "NO" << "\n";
      }else if(n == 3){
         if(v[0] > v[2]) swap(v[0], v[2]);
         if(v[0] <= v[1] && v[1] <= v[2]) cout << "YES" << "\n";
         else cout << "NO" << "\n";
      }else{
         cout << "YES" << "\n";
      }
   }
   

   return 0;
}