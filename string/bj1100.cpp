#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main() {
	char arr[8][8];
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				if (arr[i][j] == 'F') {
					count++;
				}
			}
			else if (i % 2 != 0 && j % 2 != 0) {
				if (arr[i][j] == 'F') {
					count++;
				}
			}
		}
	}
	cout << count;
	return 0;
}