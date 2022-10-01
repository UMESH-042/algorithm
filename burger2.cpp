#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int x,y,n,r;
	    cin >> x >> y >> n >> r;
	    if (x*n>r)
	        cout << -1 << endl;
	    else{
	        int t1,t2;
	        for (int i=0;i<=n;i++){
	            if (((n-i)*y + i*x)<=r){
	                t1 = i;
	                t2 = n - i;
	                break;
	            }
	        }
	        cout << t1 << " " <<  t2 << endl;
	    }
	}
	return 0;
}
