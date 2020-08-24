#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    double b;
    
    cin>>a>>b;
    if(a%5==0 && (a+0.5)<=b) {
      b = b-a-0.5; 
    }
     cout<<setprecision(2)<<fixed<<b;
    
	return 0;
}
