// Problem Link : https://www.codechef.com/problems/PERDIS
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n + 1);
      for(int i = 1; i <= n; i++) cin >> v[i];
      int match = 0;

      for(int i = 1; i <= n; i++){
         if(i == v[i]){
            if(v[i+1] == i + 1){
               match++;
               i++;
            }else match++;
         }
      }

      cout << match << "\n";
   }
   

   return 0;
}