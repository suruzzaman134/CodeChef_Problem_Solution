#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   vector<int> v(n);

   for(int i = 0; i < n; i++) cin >> v[i];

   int max_length = INT_MIN;
   int start = 0;

   for(int i = 0; i < n; i++){
      if(v[i] == 0){
         start = i + 1;
      }
      max_length = max(max_length, i - start + 1);
   }

   cout << max(0, max_length);

   return 0;
}