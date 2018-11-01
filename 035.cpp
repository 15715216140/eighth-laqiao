#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string s, ans;
    cin >> s;
    s = "((" + s + ")|" +  ")";
//    cout << s << endl;
    for(int i = 0; i < s.length(); i++) {
        ans += s[i];
        if(s[i] == ')'){
            int maxn, index1, index2, index3 = ans.length()-1;
            for(int j = ans.length() - 1; j >= 0; j--){
                if(ans[j] == '|')   index2 = j;
                if(ans[j] == '(')   {
                    index1 = j;
                    break;
                }
            }
            maxn = max(index3-index2,index2-index1) - 1;
            ans = ans.substr(0,index1).append(maxn,'x');
//            cout << ans << endl;
        }else{
//            cout << ans << endl;
            ;
        }
    }
    cout << ans.size()<<endl;
}
