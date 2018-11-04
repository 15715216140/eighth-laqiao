#include <iostream>
#include <cmath>
#include <vector>
#include <queue>


using namespace std;
int d[100001];
vector<int> a[100001];
void f(int x){
    queue <int> q;
    q.push(x);
//    d[x]--;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        d[t]--;

        for(int i = 0; i < a[t].size(); i++){
            d[a[t][i]]--;
            if(d[a[t][i]] == 1) q.push(d[a[t][i]]);
        }
    }
}
int main() {
vector<int> ans;
    int n, t1, t2, begin;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &t1, &t2);
        d[t1]++;
        d[t2]++;
        a[t1].push_back(t2);
        a[t2].push_back(t1);
    }
//    cout << "dsf";
//    return 0;
    for(int i = 1; i <= n; i++){
        if(d[i] == 1) {
            f(i);
        }
    }
    for(int i = 1; i <= n; i++){
        if(d[i] > 0) ans.push_back(i);
    }
    for(int i = 0; i < ans.size(); i++){
        if( i != 0) cout << " ";
        cout << ans[i];
    }

}
