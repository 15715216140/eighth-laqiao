#include <iostream>
#include <string>
using namespace std;
string in, post, ans = "";
void pre(int root, int l, int r) {
    if (l > r) return;
    int i = r;
    while (post[root] == in[i]) i--;
    ans += post[i];
    pre(root - 1 + i - l, l, i - 1);
    pre(root - 1, i + 1, r);
}
int main() {
    cin >> in >> post;
    pre(post.length() - 1, 0, in.length() - 1);
    cout << ans;
    return 0;
}
