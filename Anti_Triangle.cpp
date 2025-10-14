// Problem Link : https://chatgpt.com/c/68ee4a56-9df4-8321-8c80-ccda9030f069
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, l;
	    cin>>n>>l;
	    int mid = (l + 1)/2;
	    if(n <= mid)
	    {
	        for(int i = 1; i <= n; i++)
	        {
	            cout<<i<<" ";
	        }
	        cout<<endl;
	    }
	    else
	    {
	         for(int i = 1; i <= mid; i++)
	        {
	            cout<<i<<" ";
	        }
	        for(int i = mid + 1; i<=n; i++)
	        {
	            mid = mid + l;
	            cout<<mid<<" ";
	        }
	        cout<<endl;
	    }
	}

}