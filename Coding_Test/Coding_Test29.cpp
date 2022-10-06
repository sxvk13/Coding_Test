/*
*
*	Programmers Lv1 없는 숫자 더하기
*   0~9까지 총합에서 vector의 합을 빼면 나옴
*/
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    for (int i = 0; i < 10; ++i) {
        vector<int>::iterator idx = find(numbers.begin(), numbers.end(), i);
        if (idx==numbers.end()) {
            answer += i;
        }
    }

    return answer;
}
auto main()->int {

    int num;
    vector<int> numbers;

    cin >> num;
    for (int i = 0; i < num; ++i) {
        int val;
        cin >> val;
        numbers.push_back(val);
    }

    int result = solution(numbers);

    cout << result;
}
*/