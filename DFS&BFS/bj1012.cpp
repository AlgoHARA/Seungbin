#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>

using namespace std;

int m, n, k;
int field[50][50];
bool visited[50][50];

void dfs(int x, int y) {
	visited[x][y] = true;
	int dx[] = { -1, 1, 0, 0 };
	int dy[] = { 0, 0, -1, 1 };
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && field[nx][ny] == 1) {
			dfs(nx, ny);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		memset(field, 0, sizeof(field));
		memset(visited, false, sizeof(visited));
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> y >> x;
			field[x][y] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!visited[i][j] && field[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}