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
      int a, b; cin >> a >> b;
      if(a == b) cout << (a + b) - 1 << "\n";
      else cout << (a + b) << "\n";
   }
   

   return 0;
}