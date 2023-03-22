#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main() {
	int a, b;
	int Max = 0;
	vector<int> v;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		v.push_back(b);
	}
	sort(v.begin(), v.end());
	int ans = 0;
	do {
		int sum = 0;
		for (int i = 1; i < a; i++) {
			sum += abs(v[i] - v[i - 1]);
		}
		if (Max < sum) {
			Max = sum;
		}
	} while (next_permutation(v.begin(), v.end()));
	cout << Max;
	return 0;
}