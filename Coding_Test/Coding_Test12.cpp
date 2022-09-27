/*
*
*	Programmers Lv1 약수의 합
*/
/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n);

auto main()->int {
    int N;//0~3000;
    int result;
    cin >> N;
    result = solution(N);
    cout << result;
}
int solution(int n) {
    int answer = n;
    if (n >= 2) {
        answer += 1;
        for (int i = 2; i < n; ++i)
        {
            if (n % i == 0)
            {
                answer += i;
            }

        }
        
    }
    return answer;
}*/