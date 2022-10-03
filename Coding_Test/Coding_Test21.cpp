/*
*
*	Programmers Lv1 나머지가 1이 되는 수 찾기
*
*
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num = n - 1;

    //n-1소수 판별
    int flag = 0;// n : 소수 아님, 0 : 소수
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0) {
            flag = i;
            break;
        }
        else {
            continue;
        }
    }
    if (!flag) {
        answer = num;
    }
    answer = flag;

    return answer;
}
auto main()->int {
    int N;

    cin >> N;
    int result = solution(N);

    cout << result;
}
*/
