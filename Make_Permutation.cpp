// Problem Link : https://www.codechef.com/problems/MAKEPERM
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);
      i_v(n, v);

      sort(v.begin(), v.end());
      bool flag = true;
      for(int i = 0; i < n; i++){
         if(v[i] > i + 1){
            flag = false;
            break;
         }
      }

      if(flag) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}