#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        int1024_t fact=1;
        for(int i=2;i<=n;i++) {
            fact *= i;
        }
        cout<<fact<<"\n";
        
    }
	return 0;
}
