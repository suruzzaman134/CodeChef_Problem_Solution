// Problem Link : https://www.codechef.com/problems/WFWIN
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
      int m, p; cin >> m >> p;

      int max_wrong_submission = (300 - m) - 1;
      int take_minutes = (21 * max_wrong_submission) + p + m;

      while (take_minutes > 1000)
      {
         max_wrong_submission--;
         take_minutes -= 21;
      }

      cout << max_wrong_submission << "\n";
      
   }
   

   return 0;
}