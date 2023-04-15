#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int N, M;
bool visited[9];
vector<int> arr;

void dfs(int depth) {
    if (depth == M) {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr.push_back(i);
            dfs(depth + 1);
            visited[i] = false;
            arr.pop_back();
        }
    }
}

int main() {
    cin >> N >> M;
    dfs(0);
    return 0;
}