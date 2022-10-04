/*
*
*	Programmers Lv1 콜라츠 추측
*
*
*/
/*
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {

    long long n = (long long)num;
    int answer = 0;

    while (n != 1) {
        ++answer;
        n = n % 2 == 0 ? n / 2 : n * 3 + 1;

        if (answer >= 500)
            return -1;
        cout << answer << " : " << n << "\t\t";
        if (answer % 5 == 0)
            cout << endl;
    }
    return answer;
}
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;


int calc(long long num) {
    int result = 1;
    // 정수 범위를 벗어나 오버플로우가 일어나므로 형변환
    long long Num = (long long)num % 2 == 0 ? (long long)num / 2 : (long long)num * 3 + 1;
    if (result >= 500) {
        return -1;
    }
    else if (Num == 1) {
        return result;
    }
    else {
        return result + calc(Num);
    }
}

int solution(int num) {
    // answer은 카운트수
    int answer = 0;
    if (num == 1) {
        return answer;
    }
    else {
        answer = calc(num);
        if (answer >= 500) {
            return -1;
        }
        else{
            return answer;
        }
    }
}

auto main()->int {

    int Num;

    cin >> Num;

    int result = solution(Num);

    cout << result;
}
*/
