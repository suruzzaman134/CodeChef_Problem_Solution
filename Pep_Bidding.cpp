// Problem Link : https://www.codechef.com/problems/BID
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> aa(n), ad(n), pa(n), pd(n);

      for(int i = 0; i < n; i++) cin >> aa[i];
      for(int i = 0; i < n; i++) cin >> ad[i];
      for(int i = 0; i < n; i++) cin >> pa[i];
      for(int i = 0; i < n; i++) cin >> pd[i];

      int sum_aa = 0, sum_ad = 0, sum_pa = 0, sum_pd = 0;

      for(int i = 0; i < n; i++){
         sum_aa += aa[i];
         sum_ad += ad[i];
         sum_pa += pa[i];
         sum_pd += pd[i];
      }


      if(sum_aa > sum_pa && sum_ad > sum_pd) cout << 'A' << "\n";
      else if(sum_aa < sum_pa && sum_ad < sum_pd) cout << 'P' << "\n";
      else cout << "DRAW" << "\n";
   }
   


   return 0;
}