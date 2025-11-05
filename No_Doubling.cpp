// Problem Link : https://www.codechef.com/START211D/problems/NODOUB
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

      sort(v.rbegin(), v.rend());
      vector<int> ans(n);
      int l = 0, r = n - 1;
      int i = 0;
      while (l <= r)
      {
         ans[i++] = v[l++];
         ans[i++] = v[r--];
      }

      for(int ele: ans) cout << ele << " ";
      cout << "\n";
      
   }
   

   return 0;
}