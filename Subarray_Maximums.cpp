// Problem Link : https://www.codechef.com/START211D/problems/MXPERST
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
      int n; cin >> n;
      string s; cin >> s;
      if(s[0] == '0' || s[n-1] == '0'){
         cout << -1 << "\n";
         continue;
      }

      vector<int> one;
      for(int i = 0; i < n; i++){
         if(s[i] == '1') one.push_back(i+1);
      }

      int j = 1;
      for(int i : one){
         cout << i << " ";
         for(; j < i; j++){
            if(s[j] == '0') cout << j+1 << " ";
         }
         j = i;
      }
      cout << "\n";
   }
   

   return 0;
}