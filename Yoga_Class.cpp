// Problem Link : https://www.codechef.com/problems/YOGACLASS
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
      int h, x, y; cin >> h >> x >> y;

      int earn = 0;
      if(x * 2 <= y){
          earn += (h / 2) * y;
          earn += (h % 2) * x;
      }
      else earn += h * x;

      cout << earn << "\n";
   }
   

   return 0;
}