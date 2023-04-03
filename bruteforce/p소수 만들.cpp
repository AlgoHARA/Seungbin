#include <vector>
#include <iostream>
using namespace std;

int abc(int num) {
    int count = 0;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int solution(vector<int> nums) {
    int answer = 0;
    int num = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                num = nums[i] + nums[j] + nums[k];
                int count = abc(num);
                if (count == 1) {
                    answer++;
                }
            }
        }
    }

    return answer;
}