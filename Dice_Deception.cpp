// Problem Link : https://www.codechef.com/problems/DIDE
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());

      long long sum = 0;
      for(int i = 0; i < n; i++){
         if((v[i] == 1 || v[i] == 2 || v[i] == 3) && k > 0){
            sum += 7 - v[i];
            k--;
         }else sum += v[i];
      }

      cout << sum << "\n";
   }
   

   return 0;
}