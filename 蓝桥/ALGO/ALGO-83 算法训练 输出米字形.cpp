#include <iostream>
#include <algorithm>
char c[1000][1000];
using namespace std;
int main() {
    fill(c[0],c[0]+1000*1000,'.');
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char ch = 'A' + n - i - 1;
        c[n+i][n+i] = c[n-i][n-i]= c[n+i][n-i]= c[n-i][n+i] = ch;
        c[n][n+i] = c[n][n-i]= c[n+i][n]= c[n-i][n] = ch;
    }
    for(int i = 1; i <= 2*n-1; i++){
        for(int j = 1; j <= 2*n-1; j++)
            cout << c[i][j];
        cout << endl;
    }
    return 0;
}
