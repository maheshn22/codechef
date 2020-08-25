#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int firstDigit(ll n){
    int digits = (int)log10(n); 
    int first = (int)(n / pow(10, digits)); 
     return first;
}

int main() {
	// your code goes here
	ll T, n;
	
	cin>>T;
	while(T--) {
	    cin>>n;
	    int first= firstDigit(n);
	    int last = n%10;
	    cout<<first+last<<"\n";
	}
	
	return 0;
}
