/*
*
*	Programmers Lv1 음양 더하기
*
*/
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    vector<int>::iterator itr_i = absolutes.begin();
    vector<bool>::iterator itr_b = signs.begin();
    for (; itr_i != absolutes.end(); ++itr_i) {
        if (*itr_b == true) {
            answer += (*itr_i);
        }
        else {
            answer += (*itr_i) * -1;
        }
        ++itr_b;
    }
    

    return answer;
}
auto main()->int {

    int num;
    vector<int> absolutes;
    vector<bool> signs;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int val;
        cin >> val;
        if (val < 0) {
            signs.push_back(false);
        }
        else {
            signs.push_back(true);
        }
        absolutes.push_back(abs(val));
    }

    int result = solution(absolutes,signs);

    cout << result;
}
*/