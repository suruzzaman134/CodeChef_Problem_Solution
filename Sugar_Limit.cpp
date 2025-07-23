#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n), b(n);
      for(int i = 0; i < n; i++) cin >> v[i];

      for(int i = 0; i < n; i++){
         cin >> b[i];
      }
      int max_satisfaction = 0;
      for(int l : b){
         int sum = 0;

         for(int i = 0; i < n; i++){
            if(b[i] <= l && v[i] > 0){
               sum += v[i];
            }
         }

         max_satisfaction = max(max_satisfaction, sum - l);
      }

      cout << max_satisfaction << "\n";
   }
   

   return 0;
}