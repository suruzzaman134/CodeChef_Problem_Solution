// Problem Link : https://www.codechef.com/problems/P1HOME
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n1, n2 ; cin >> n1 >> n2;
   if(n1 == n2) cout << "Yes";
   else cout << "No";

   return 0;
}