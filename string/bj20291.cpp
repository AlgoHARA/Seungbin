#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;

    unordered_map<string, int> freq;

    for (int i = 0; i < a; i++) {
        string s;
        cin >> s;
        string decimal_part = s.substr(s.find('.') + 1);
        freq[decimal_part]++;
    }

    vector<string> decimal_parts;
    for (const auto& [part, count] : freq) {
        decimal_parts.push_back(part);
    }
    sort(decimal_parts.begin(), decimal_parts.end());

    for (const auto& part : decimal_parts) {
        cout << part << " " << freq[part] << "\n";
    }

    return 0;
}