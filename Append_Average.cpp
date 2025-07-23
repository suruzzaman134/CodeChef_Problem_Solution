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
      long long sum = 0;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         v[i] = x;
         sum += x;
      }
      sort(v.begin(), v.end());

      int t1 = v[0], t2 = v[1];
      
      for(int i = 0; i < k; i++)
      {
         long long s = t1 + t2, n;

         n = (s % 2 == 0 ? s / 2 : (s + 1) / 2);

         if(t2 == n){
            sum += (k - i) * n;
            break;
         }

         sum += n;
         t2 = n;
      }
      
      cout << sum << "\n";
      
   }
   

   return 0;
}