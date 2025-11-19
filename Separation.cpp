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
      int n, x; cin >> n >> x;
      vi v(n);
      set<int> st;
      for(int i = 0; i < n; i++){
         int m; cin >> m;
         st.insert(m);
      }

      if(*st.begin() >= x || *--(st.end()) <= x || st.count(x)) cout << "Yes" << "\n";
      else cout << "No" << "\n";
   }
   

   return 0;
}