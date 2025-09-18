// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      if(n <= 1) cout << "no" << "\n";
      else {
         bool flag = true;
         for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
               flag = false;
               break;
            }
         }

         if(flag) cout << "yes" << "\n";
         else cout << "no" << "\n";
      }
   }
   

   return 0;
}