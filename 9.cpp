#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, k;
	vector<int> v1, v2;
	cin >> n >> k;
	for(int i = 0; i < n ;i++) {
		int a, b;
		cin >> a >> b;
		v1.push_back(a);
		v2.push_back(b);
	} 
	for(int i = 1 ; ;i++) {
		int sum = 0;
		for(int j = 0; j < n; j++) 
			sum += min(v1[j],v2[j])*min(v1[j],v2[j])/(i*i);
		if(sum < k) {
			cout << i-1;
			return 0;
		} 
	}
return 0;
}

