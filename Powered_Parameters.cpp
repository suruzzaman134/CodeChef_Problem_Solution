#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n;i++){
        cin>>v[i];
    }
    int c=0;
    for(int i=1; i<=n;i++){
        int x=v[i];
        if(x==1){
            c+=n;
        }
        else{
            int power=1;
            for(int j=1; j<=n;j++){
                if(power > 1e9/x){
                    break;
                }
                power*=x;
                if(power<=v[j])c++;
            }
        }
    }
    cout<<c<<endl;
}

signed main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    solve();
	}
	

}