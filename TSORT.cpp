#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	ll n=t;
	ll a[n];
	int i=0;
	while(t-->0)
	{
	    cin>>a[i++];
	}
	sort(a,a+n);
	for(int j:a)
	    cout<<j<<endl;
	return 0;
}

