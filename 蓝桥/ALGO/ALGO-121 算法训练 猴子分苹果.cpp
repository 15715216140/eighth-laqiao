#include <iostream>
using namespace std;
int m, n;
int check(int num) {
    for (int i = 0; i < n; i++) {
        if (num % (n-1) == 0) num = num / (n-1) * n + m;
        else return 0;
    }
    return num;
}
int main() {
    cin >> n >> m;
    for (int i = 0;; i++) {
        int num = i * n + m;
        if (check(num)) {
            cout << check(num);
            return 0;
        }
    }
}
