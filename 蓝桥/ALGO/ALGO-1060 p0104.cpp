#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a , b, c;
    cin >> a >> b >> c;
    double det = b * b - 4 * a * c;
    if(det < 0) {
        printf("%s","Error\n");
    }else if(det == 0 ) {
        printf("x1 = %6f\n",-1 * b / (2 * a));
    }else {
        printf("x1 = %6f\n",(-1 * b + sqrt(det)) / (2 * a));
        printf("x2 = %6f\n",(-1 * b - sqrt(det)) / (2 * a));
    }
    return 0;
}