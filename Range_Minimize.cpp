// Problem Link : https://www.codechef.com/problems/MNR
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

      if(n == 3) cout << 0 << "\n";
      else {
         int pos1 = v[n - 3] - v[0];
         int pos2 = v[n-1] - v[2];
         int pos3 = v[n-2] - v[1];
         cout << min({pos1, pos2, pos3}) << "\n"; 
      }
   }
   

   return 0;
}