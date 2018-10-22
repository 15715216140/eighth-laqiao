#include <iostream>
using namespace std;
int main() {
    double x, ans = 0;
    cin >> x;
    if(x != 0){
        for(int i = 1; ; i++){
            ans += 1.0 / (i+1);
            if(ans >= x){
                printf("%d card(s)\n",i);
                return main();
            }
        }
    } else{
        return 0;
    }
}
