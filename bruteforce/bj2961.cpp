#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_N = 10;
int N, S[MAX_N], B[MAX_N], selected[MAX_N];
int ans;

void solve(int idx, int cnt, int s, int b) {
    if (idx == N) {
        if (cnt == 0) return;
        int diff = abs(s - b);
        ans = min(ans, diff);
        return;
    }

    selected[idx] = 1; 
    solve(idx + 1, cnt + 1, s * S[idx], b + B[idx]);
    selected[idx] = 0;
    solve(idx + 1, cnt, s, b);
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> B[i];
    }

    ans = 1000000000;
    solve(0, 0, 1, 0);
    cout << ans << endl;
    return 0;
}