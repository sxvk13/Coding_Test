/*
*
*	Programmers Lv1 정수 제곱근 판별
*
*/

/* 함수 사용
long long solution(long long n) {
    long long answer = 0;
    if(sqrt(n)==floor(sqrt(n)))
    {
        answer = (long long)pow(sqrt(n)+1,2);
    }
    else {
        answer = -1;
    }


    return answer;

}
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;


long long solution(long long n) {
    long long answer = 0;
    long long num = n;
    bool sqr = false;
    if (num == 1) {
        sqr = true;
    }
    else {
        while (num > 0) {
            if (sqr)
                break;
            if (num < 10)
                num = num / 2;
            else
                num = num / 10;
            if (num % 2 != 0) {
                num -= 1;
                continue;
            }
            else {
                for (long long i = 1; i <= num; ++i) {
                    if ((i * i) == n) {
                        num = i;
                        sqr = true;
                        break;
                    }
                    else if ((i * i) > n) {
                        break;
                    }

                }

            }
        }
    }
    
    answer = sqr==true?(num + 1) * (num + 1):-1;
    
    return answer;

}
auto main()->int {
    long long N;
    cin >> N;
    long long result = solution(N);
    cout << result;
}*/