// Problem Link : https://www.codechef.com/START203D/problems/PASSINGGR
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

      int pass_mark = v[0];
      int cnt = 0;
      for(int i = 0; i < n; i++){
         if(pass_mark <= v[i]) cnt++;
      }

      cout << cnt << "\n";
   }
   

   return 0;
}