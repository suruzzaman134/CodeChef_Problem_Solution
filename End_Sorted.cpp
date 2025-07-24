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
      int m_value = INT_MIN;
      int mn_value = INT_MAX;
      int mn_idx;
      int m_idx;

      for(int i = 0; i < n; i++){
         if(v[i] > m_value){
            m_value = v[i];
            m_idx = i;
         }

         if(mn_value > v[i]){
            mn_value = v[i];
            mn_idx = i;
         }
      }
      int op = 0;
      if(m_idx != n - 1) op += n - m_idx - 1;
      if(mn_idx != 0) op += mn_idx;
      if(mn_idx > m_idx){
         op -= 1;
         
      }

      cout << op << "\n";
   }
   

   return 0;
}