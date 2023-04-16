#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<cstring>
#include<stdio.h>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int N, M;
bool visited[10];
vector<int>arr;

void dfs(int num, int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = num; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[depth] = i;
			dfs(i + 1, depth + 1);
			visited[i] = false;
		}
	}
}

int main() {
	cin >> N >> M;
	arr.resize(M);
	dfs(1, 0);
	return 0;
}