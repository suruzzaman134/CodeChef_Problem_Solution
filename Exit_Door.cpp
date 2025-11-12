// Problem Link : https://www.codechef.com/problems/P3BAR
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

      int ans = 0;
      int max = n;
      vector<int> max_idx;

      for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
            int left = 0, right = 0;
            if(v[j] == max){

               for(int m_i : max_idx){
                  if(j > m_i) left++;
                  else right++;
               }
               
               ans += min(j - left, n - j - right - 1);
               max_idx.push_back(j);
               max -= 1;
            }
         }

      }

      cout << ans << "\n";
   }
   

   return 0;
}