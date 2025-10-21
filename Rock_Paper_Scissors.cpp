// Problem Link : https://www.codechef.com/problems/ROCPAPSCI
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;
      int cnt = 0;
      for(int i = 1; i < n; i++){
         if(s[i] == s[i - 1]){
             cnt++;
             i++;
         }
      }

      cout << n - cnt << "\n";
   }
   

   return 0;
}