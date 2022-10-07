/*
*
*	Programmers Lv1 약수의 개수와 덧셈
*
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; ++i) {
        int cnt = 0;
        if (i == 1) {
            cnt++;
        }
        else {
            for (int j = 1; j <= i / 2; j++) {
                if (i % j == 0) {
                    if (j == i / j) {
                        cnt += 1;
                    }
                    else {
                        cnt += 2;
                    }
                }
            }
        }
        if (cnt % 2 == 0) {
            if (left == right) 
                answer += i * 2;
            else
                answer += i;
        }
        else {
            if (left == right)
                answer -= i * 2;
            else
                answer -= i;
        }
    }
    return answer;
}
auto main()->int {

    int left,right;

    cin >> left>>right;

    int result = solution(left,right);

    cout << result;
}
*/