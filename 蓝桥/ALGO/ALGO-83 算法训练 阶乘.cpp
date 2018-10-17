#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, cnt2 = 0, cnt5 = 0, ans = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int t = i;
        while(t % 2 == 0){
            cnt2++;
            t /= 2;
        }
        while(t % 5 == 0){
            cnt5++;
            t /= 5;
        }
        ans = ans * t % 10;
    }
    if(cnt2 >= cnt5) ans *= pow(2,cnt2-cnt5);
    else ans *= pow(5,cnt5-cnt2);
    cout << ans % 10 << endl;
    return 0;
}