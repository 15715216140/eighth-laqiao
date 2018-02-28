#include <iostream>
#include <algorithm>
using namespace std;
double a[31][31] = {0};
int main() {
	for(int i = 1; i <= 29; i++) {
		for(int j = 1; j <= i; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= 30; i++) {
		for(int j = 1; j <= i; j++) {
			a[i][j] += a[i-1][j]*0.5 + a[i-1][j-1]*0.5;
		}
	}
	double maxn = a[30][1], minn = a[30][1];
	for(int i = 1; i <= 30; i++) {
		maxn = max(a[30][i],maxn);
		minn = min(a[30][i],minn);
	}
	printf("%lf",2086458231*maxn/minn);
	return 0;
}

