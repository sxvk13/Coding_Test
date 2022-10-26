/*
*
*	Programmers Lv1 콜라 문제
*
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int total = n;
    int give = 0;
    int take = 0;
    int total_take = 0;
    int leave_bottle = 0;
    for (int i = 0; total>=a; ++i) {
        give = total/a * a;                        
        leave_bottle = total % a;                  
        take = (give / a)*b;                           
        total_take += take;                        
        total = take+leave_bottle;          
    }
    answer = total_take;
    return answer;
}
auto main()->int {

    int a, b, c;
    cin >> a >> b >> c;
    int result = solution(a, b, c);
    cout << result;
}
*/