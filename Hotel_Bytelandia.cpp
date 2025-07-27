#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
   if(a.first == b.first) return a.second < b.second;
   else return a.first < b.first;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> a(n), b(n);

      for(int i = 0; i < n; i++) cin >> a[i];
      for(int i = 0; i < n; i++) cin >> b[i];

      vector<pair<int, int>> events;

      for(int i = 0; i < n; i++){
         events.push_back({a[i], +1});
         events.push_back({b[i], -1});
      }

      sort(events.begin(), events.end(), cmp);

      int max_count = 0, count = 0;

      for(pair<int, int> x : events){
         count += x.second;
         max_count = max(count, max_count);
      }

      cout << max_count << "\n";
   }
   

   return 0;
}