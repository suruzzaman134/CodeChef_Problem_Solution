// Problem Link : https://www.codechef.com/problems/DPOWER
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<pair<int, int>> v(n);
      vector<int> rank(n);
      for(int i = 0; i < n; i++){
         cin >> v[i].first;
         v[i].second = i;
      }

      sort(v.begin(), v.end());

      for(int i = 0; i < n; i++){
         rank[v[i].second] = i+1;
      }

      int same = 0;
      for(int i = 0; i < n - 1; i++){
         if(abs(rank[i] - rank[i+1]) == 1) same++;
      }

      cout << n - same << "\n";




   }
   

   return 0;
}  