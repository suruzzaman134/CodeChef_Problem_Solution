#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){
   if(x.first != y.first) 
        return x.first > y.first; 
    return x.second < y.second;  
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;

      vector<pair<int, int>> v;

      for(int i = 1; i <= n; i++){
         v.push_back({__gcd(i, n), i});
      }

      sort(v.begin(), v.end(), cmp);

      for(auto [x, y]: v){
         cout << y << " ";
      }

      cout << "\n";
   }
   

   return 0;
}