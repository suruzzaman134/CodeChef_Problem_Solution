#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v;

      v.push_back(n-1);
      v.push_back(n-2);

      for(int i = 1; i < n - 3; i++) v.push_back(i);

      if(n > 3) v.push_back(n - 3);

      v.push_back(n);



      for(int x : v) cout << x << " ";
      cout << "\n";

      
   }
   

   return 0;
}