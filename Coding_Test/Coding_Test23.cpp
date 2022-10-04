/*
*
*	Programmers Lv1 두 정수 사이의 합
*
*/
/*
#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int minVal = a < b ? a : b;
    int maxVal = a < b ? b : a;
    for (int i = minVal; i < maxVal + 1; ++i) {
        answer += i;
    }
    
    if (a > b) a ^= b ^= a ^= b;


    printf("%d \t %d ", a, b);

    answer = (long long)b * -~b / 2 - (long long)a * ~- a / 2;

    return answer;
}
auto main()->int {
    int a, b;
    cin >> a >> b;
    long long result = solution(a, b);

    cout << result;
}

*/

