// Problem Link : https://www.codechef.com/problems/MAXHAMDIST
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
      int n, m; cin >> n >> m;

      vector<pair<long long, pair<long long, long long>>> v(n);
      while (m--)
      {
         string s; cin >> s;
         for(int i = 0; i < n; i++){
            if(s[i] == '0') v[i].first++;
            else if(s[i] == '1') v[i].second.first++;
            else v[i].second.second++;
         }
      }

      long long ans = 0;

      for(int i = 0; i < n; i++){
         long long zero = v[i].first;
         long long one = v[i].second.first;
         long long ques = v[i].second.second;
         while (ques--)
         {
            if(zero <= one) zero++;
            else one++;
         }
         ans += (zero * one);
      }

      cout << ans << "\n";
      
   }
   

   return 0;
}
