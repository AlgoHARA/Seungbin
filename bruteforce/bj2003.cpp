#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <stack>

using namespace std;

int main() {
    int N, M, a, count = 0, sum = 0;
    vector<int> v;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            sum = sum + v[j];
            if (j == v.size() - 1) {
                if (sum < M) {
                    sum = 0;
                    break;
                }
            }
            if (sum >= M) {
                if (sum == M) {
                    count++;
                }
                sum = 0;
                break;
            }
            else {
                continue;
            }
        }
        if (i == v.size() - 1) {
            break;
        }
    }
    
    cout << count;
}