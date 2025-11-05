// Problem Link : https://www.codechef.com/problems/SPLITPERM
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
         int r = n, l = 1;
         if(n % 2 == 0){
            while (l < r)
            {
               cout << r << " " << l << " ";
               r--;
               l++;
            }
            cout << "\n";
         }else{
            while (l < r)
            {
               cout << r << " " << l << " ";
               r--;
               l++;
            }
            cout << l << "\n";
         }
      
   }
   

   return 0;
}