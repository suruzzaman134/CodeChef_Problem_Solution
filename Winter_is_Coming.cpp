#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
      int a,b;
     cin>>a>>b;
     int c=0;
     int arr[n];
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     bool x=false;
     for(int i=0; i<n; i++){
          if(arr[i]<a){
              if(!x){
                  x=true;
                  c++;
              }
         }
         else if(arr[i]>b){
             x=false;
         }
     }
     cout<<c<<endl;
 }
}