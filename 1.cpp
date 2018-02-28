#include <iostream>
using namespace std;
int main()
{
    freopen("t.txt","r",stdin);
    double ans = 0, a;
    int dis;
    string s;
    while(cin >> s >>a >> dis ){
        if(dis < 10)	dis = dis*10;
        ans += dis*a/100;
    }
    printf("%.5f.",ans);
    return 0;
}
//5136.859500
