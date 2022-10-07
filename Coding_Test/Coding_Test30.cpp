/*
*
*	Programmers Lv1 수박수박수박수박수박수
*   
*/
/*
//한글깨짐
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string pattern(int n) {
    string str = "수박";

    string result = "";

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            result += str.substr(0, 3);
        }
        else {
            result += str.substr(3, 5);
        }
    }

    return result;
}

string solution(int n) {
    string answer = "";

    answer = pattern(n);
    return answer;
}
auto main()->int {
    int N;
    cin >> N;
    string result = solution(N);
   
    cout << result;
}
*/