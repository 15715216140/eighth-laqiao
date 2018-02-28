#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int a[10000] = {0};
bool ok(int n, int k) {
	for(int i = 0; i < 10; i++) {
		if(!a[n+i*k]) return false;
//		if(k == 210 && n == 199)	cout << n+i*k << endl; 
	}
	return true;
}
int main() {
	for(int i = 2; i < 10000; i++) {
		int t = 1;
		for(int j = 2; j*j <= i; j++) {
			t = i % j;
			if(t == 0 )	break;
		}
		if(t == 0)	a[i] = 0;
		else		a[i] = 1;
	}
	for(int k = 1; ; k++) {
		for(int i = 2; i < 10000; i++) {
			if(a[i] && ok(i,k)) {
				cout << k;
				return 0;
			}
		}
	}
	return 0;
}

