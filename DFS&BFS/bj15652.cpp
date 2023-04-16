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
vector<int> arr;

void dfs(int num, int depth) {
	if (depth == M) {
		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = num; i <= N; i++) {
		arr[depth] = i;
		dfs(i, depth + 1);
	}
}

int main() {
	cin >> N >> M;
	arr.resize(M);
	dfs(1, 0);
	return 0;
}