#include <iostream>
using namespace std;
int main() {
    double p, r;
    cin >> p >> r;
    printf("%.2f", p *(1 +  0.01 * r * 0.95));
    return 0;
}