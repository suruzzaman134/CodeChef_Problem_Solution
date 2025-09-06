// Problem Link : https://www.codechef.com/problems/SKONG
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int d, h; cin >> d >> h;
   cout << ((d - 4) * 24) + h;

   return 0;
}