#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s; cin >> s;
   sort(s.begin(), s.end());

   if(s == "act") cout << "Yes";
   else cout << "No";

   return 0;
}