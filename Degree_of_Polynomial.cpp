// Problem Link : http://codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];

      int idx;
      for(int i = n - 1; i >= 0; i--){
         if(v[i] != 0){
            idx = i;
            break;
         }
      }

      cout << idx << "\n";
   }

   return 0;
}