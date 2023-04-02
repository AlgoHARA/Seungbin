#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    string v;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'z') {
            i = i + 3;
            v = v + "0";
        }
        else if (s[i] == 'o') {
            i = i + 2;
            v = v + "1";
        }
        else if (s[i] == 't') {
            if (s[i + 1] == 'w') {
                i = i + 2;
                v = v + "2";
            }
            else if (s[i + 1] == 'h') {
                i = i + 4;
                v = v + "3";
            }
        }
        else if (s[i] == 'f') {
            if (s[i + 1] == 'o') {
                i = i + 3;
                v = v + "4";
            }
            else if (s[i + 1] == 'i') {
                i = i + 3;
                v = v + "5";
            }
        }
        else if (s[i] == 's') {
            if (s[i + 1] == 'i') {
                i = i + 2;
                v = v + "6";
            }
            else if (s[i + 1] == 'e') {
                i = i + 4;
                v = v + "7";
            }
        }
        else if (s[i] == 'e') {
            i = i + 4;
            v = v + "8";
        }
        else if (s[i] == 'n') {
            i = i + 3;
            v = v + "9";
        }
        else {
            v = v + s[i];
        }
    }
    answer = stoi(v);
    cout << answer;
    return answer;
}

int main() {
    string s;
    cin >> s;
    solution(s);
    return 0;
}