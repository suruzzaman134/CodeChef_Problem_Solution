// Problem Link : https://www.codechef.com/problems/SWAPUNITE
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      string s; cin >> s;
      map<char, int> mp;
      for(char ch: s) mp[ch]++;
      int ans = INT_MAX;
      int continues_ch = 1;
      for(int i = 0; i < s.size(); i++){
         if(i != 0 && s[i] == s[i - 1]) continues_ch++;
         else continues_ch = 1;
         ans = min(mp[s[i]] - continues_ch, ans);
      }

      cout << ans << "\n";
   }


   return 0;
}