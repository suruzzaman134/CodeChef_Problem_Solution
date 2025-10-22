// Problem Link : https://www.codechef.com/problems/CHANGEXY
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      long long a, b, k; cin >> a >> b >> k;
      long long cnt = 0;
      while (a != b)
      {
         if((a + 1) * k == b){
            cnt += 2;
            a = b;
         }else if(a * k <= b){ 
            a *= k;
            cnt++;
         }
         else{
            cnt += b - a;
            a = b;  
         }
      }

      cout << cnt << "\n";
      

   }
   


   return 0;
}