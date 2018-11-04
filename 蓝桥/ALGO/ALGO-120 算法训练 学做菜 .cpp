#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= 2 && b >= 1 && d >= 2) {
        int minn1 = min(a / 2, b / 1);
        int minn = min(minn1, d / 2);
        a -= minn * 2;
        b -= minn * 1;
        d -= minn * 2;
        cout << minn << endl;
    }else{
        cout << 0 << endl;
    }
    if (a >= 1 && b >= 1 && d >= 1) {
        int minn1 = min(a / 1, b / 1);
        int minn2 = min(c / 1, d / 1);
        int minn = min(minn1, minn2);
        a -= minn * 1;
        b -= minn * 1;
        c -= minn * 1;
        d -= minn * 1;
        cout << minn << endl;
    }else{
        cout << 0 << endl;
    }
    if (c >= 2 && d >= 1) {
        int minn = min(c / 2, d / 1);
        c -= minn * 2;
        d -= minn * 1;
        cout << minn << endl;
    }else{
        cout << 0 << endl;
    }
    if (b >= 3) {
        int minn = b / 3;
        c -= minn * 3;
        cout << minn << endl;
    }else{
        cout << 0 << endl;
    }
    if(a >= 1 && d >= 1){
        int minn = min(a / 1, d / 1);
        cout << minn << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
