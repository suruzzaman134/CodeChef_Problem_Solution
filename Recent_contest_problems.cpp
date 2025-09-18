// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<string> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];
      int s = 0, l = 0;
      for(int i = 0; i < n; i++){
         if(v[i] == "START38") s++;
         else l++;
      }

      cout << s << " " << l << "\n";
      
   }
   

   return 0;
}