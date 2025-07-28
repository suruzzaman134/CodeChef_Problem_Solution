#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> a(n), b(n);
	    
	    for(int i = 0; i < n; i++) cin >> a[i];
	    for(int i = 0; i < n; i++) cin >> b[i];
	    
	    int max_t = INT_MIN;
	    
	    for(int i = 0; i < n; i++){
	        int current_t = 0;
	        
	        for(int j = 0; j < n; j++){
	            if(b[j] <= b[i] && a[j] > 0){
	                current_t += a[j];
	            }
	        }
	        
	        max_t = max(max_t, current_t - b[i]);
	        
	    }
	    
	    cout << max(max_t, 0) << "\n";
	}

}
