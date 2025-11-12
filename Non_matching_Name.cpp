// Problem Link : https://www.codechef.com/problems/ABNOMAT
#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m; cin >> n >> m;
      string sa, sb; cin >> sa >> sb;
      map<char, int> mp;
      for(char ch: sa) mp[ch]++;
      for(char ch: sb) mp[ch]++;
      bool ok = false;
      for(char i = 'a'; i <= 'z'; i++){
         if(!mp.count(i)){
            ok = true;
            break;
         }
      }
      if(ok) cout << "Yes" << "\n";
      else cout << "No" << "\n";
   }
   

   return 0;
}