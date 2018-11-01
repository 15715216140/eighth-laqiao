#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;
int n, m;
int a[100];

int find(int x) {
    int t = x;
    while (x != a[x])
        x = a[x];
    while (t != a[t]) {
        int z = t;
        t = a[t];
        a[z] = x;
    }
    return x;
}

void uni(int x, int y) {
    a[find(x)] = find(y);
}

struct node {
    int s, e, w;
    double det;

    friend bool operator<(const node &a, const node &b) {
        return a.w < b.w;
    }
};
vector<node> nodes;
double kul(vector<node> &v, int i) {
    int cnt = 0, vis[100] = {0}, sum = 0;
    for (int j = 0; j < 100; j++) a[j] = j;
    vector<int> t;
    for (; i < v.size() && cnt < n - 1; i++) {
        if (find(v[i].s) != find(v[i].e)) {
            uni(v[i].e, v[i].s);
            sum += v[i].w;
            t.push_back(v[i].w);
            cnt++;
        }
    }
    if (cnt == n - 1) {
        double avg = 1.0 * sum / t.size();
        double sum2 = 0;
        for (int j = 0; j < t.size(); j++) {
            sum2 += (t[j] - avg) * (t[j] - avg);
        }
        return sum2 / t.size();
    }
    return 999999;
}
int main() {
    int cntt = 1;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) return 0;
        for (int i = 0; i <= n; i++) a[i] = i;
        nodes.resize(m);
        for (int i = 0; i < m; i++)
            scanf("%d %d %d", &nodes[i].s, &nodes[i].e, &nodes[i].w);
        sort(nodes.begin(), nodes.end());
        double minn = 9999999;
        for (int i = 0; i < m - n + 2; i++) {//以每条边为位最小边建树
            minn = min(kul(nodes, i), minn);
        }
        printf("Case %d: %.2f\n", cntt++, minn);
    }

}
/*
 *1.先按照边权值升序排序，因为要方差最小，要求边权尽可能的聚集在一起，尽可能排序后连续
 * 2.枚举出以任意边为最小边的生成树的方差，取最小值即可。
 */