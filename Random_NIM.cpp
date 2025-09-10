// Problem Link : https://www.codechef.com/problems/RNIM
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

      bool flag = false;

      for(int i = 0; i < n; i++){
         if(v[i] > 1){
            flag = true;
            break;
         }
         
      }

      if(!flag){
          if(n % 2 == 0) cout << 0 << "\n";
          else cout << 1 << "\n";
      }else cout << 499122177 << "\n";
   }
   

   return 0;
}