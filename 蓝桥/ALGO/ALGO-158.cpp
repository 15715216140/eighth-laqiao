#include <iostream>
using namespace std;
int main() {
    double n;
    cin >> n;
    if(n > 0) cout << 1;
    else if(n < 0) cout << -1;
    else if(n == 0) cout << 0;
    return 0;
}

