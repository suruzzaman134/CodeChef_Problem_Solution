
#include <bits/stdc++.h>
using namespace std;


#define ll int long long
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    fastio()
    
	int t; cin>>t; 
	while(t--){
	    int n; cin>>n; string s; cin>>s;
	    int cnt00 = 0, cnt01 = 0, cnt10 = 0, cnt11 = 0;
	    for(int i = 0; i <= (n-2); i+=2){
	        if((s[i] == '0') && (s[i+1] == '0')) cnt00++;
	        if((s[i] == '0') && (s[i+1] == '1')) cnt01++;
	        if((s[i] == '1') && (s[i+1] == '0')) cnt10++;
	        if((s[i] == '1') && (s[i+1] == '1')) cnt11++;
	    }
	    int ans = ((cnt10 > 0) ? 1 : 0) + cnt00*2 + ((cnt01 > 0) ? 2 : 0) + cnt11*2 + ((cnt10 > 1) ? 1 : 0);
	    cout<<ans<<endl;
	}
	return 0;
}
