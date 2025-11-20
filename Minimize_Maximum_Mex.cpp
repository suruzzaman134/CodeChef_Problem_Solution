// Problem Link : https://www.codechef.com/problems/MINMAXMEX
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
      vi a(n), b(n);
      vec_in(a);
      vec_in(b);

      set<int> one, both;

      for(int i = 0; i < n; i++){
         if(a[i] == b[i]) both.insert(a[i]);
         else{
            one.insert(a[i]);
            one.insert(b[i]);
         }
      }
      int mex = 0;
      bool first = true;
      while (true)
      {
         if(both.count(mex)) mex++;
         else if(first && one.count(mex)){
            first = false;
            mex++;
         }else break;
      }

      cout << mex << "\n";
      
   }
   

   return 0;
}