// Problem Link : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   
   int p1_sum = 0, p2_sum = 0;
   int win, lead = 0;

   while (n--)
   {
      int a, b; cin >> a >> b;
      p1_sum += a; p2_sum += b;

      if(p1_sum - p2_sum > lead){
         win = 1; lead = p1_sum - p2_sum;
      }else if(p2_sum - p1_sum > lead){
         win = 2; lead = p2_sum - p1_sum;
      }
   }

   cout << win << " " << lead;
   
   

   return 0;
}