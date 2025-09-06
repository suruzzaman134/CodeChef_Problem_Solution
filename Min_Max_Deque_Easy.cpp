// Problem Link : https://www.codechef.com/problems/DEQMNMXEZ
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, q; cin >> n >> q;
      vector<int> v(n);
      deque<int> dq;

      for(int i = 0; i < n; i++){
         cin >> v[i];
         if(i != 0){
            if(i % 2 == 0){
               dq.front() < dq.back() ? dq.push_front(v[i]) : dq.push_back(v[i]);
            }else{
               dq.front() > dq.back() ? dq.push_front(v[i]) : dq.push_back(v[i]);
            }
         }else dq.push_back(v[i]);
      }

      cout << (dq.front() <= dq.back() ? dq.front() : dq.back()) << "\n";

      
   }
   

   return 0;
}