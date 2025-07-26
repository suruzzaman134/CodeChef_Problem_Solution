#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   cin.ignore();
   while (t--)
   {
      int n; cin >> n;
      cin.ignore();
      vector<string> roads, dir;

      for(int i = 0; i < n; i++){
         string s; getline(cin , s);

         if(s[0] == 'B' || s[0] == 'R'){
            roads.push_back(s.substr(5));
         }else roads.push_back(s.substr(4));

         if(s[0] == 'R') dir.push_back("Left");
         else if(s[0] == 'L') dir.push_back("Right");
      }

      dir.push_back("Begin");

      for(int i = n - 1; i >= 0; i--){
         cout << dir[i] << roads[i] << "\n";
      }
   }
   

   return 0;
}