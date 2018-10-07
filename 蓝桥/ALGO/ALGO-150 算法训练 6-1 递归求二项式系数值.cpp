#include <iostream>
using namespace std;
int c(int k, int n){
    if(k == 0 || k == n) return 1;
    else return c(k,n-1)+c(k-1,n-1);
}
int main() {
    int k, n;
    cin >> k >> n;
    cout << c(k,n);
    return 0;
}
