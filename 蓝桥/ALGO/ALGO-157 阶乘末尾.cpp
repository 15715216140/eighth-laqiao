#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, len, cnt = 0;
    cin >> n >> len;
    long long res, ans = 1, m = pow(10, len);
    for (int i = 1; i <= n; i++)
        ans = (ans * i) % m;
    if (ans == 0) cnt = 1;
    else cnt = log10(ans) + 1;
    string s(len - cnt, '0');
    printf("%s%lld", s.c_str(), ans);
    return 0;
}
