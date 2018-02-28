#include <iostream>
using namespace std;
int vis[7][7] = {0}, ans= 0;
int x[] = {0,0,-1,1}, y[] = {1,-1,0,0};
void dfs(int a, int b) {
	if(a == 0 || a == 6 || b == 0 || b == 6) {
		ans++;
		return ;
	} else {
		for(int i = 0; i < 4; i++) {
			int tx = a+x[i];
			int ty = b+y[i];
			if(vis[tx][ty] == 0) {
				vis[tx][ty] = 1;
				vis[6-tx][6-ty] = 1;
				dfs(tx,ty);
				vis[tx][ty] = 0;
				vis[6-tx][6-ty] = 0;
			}
		}

	}
	return ;
}
int main() {
	vis[3][3] = 1;
	dfs(3,3);
	cout << ans/4;
	return 0;
}

