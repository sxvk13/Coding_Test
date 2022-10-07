/*
*
*	Programmers Lv1 문자열 다루기 기본
*
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.size() == 4 || s.size() == 6) {
        for (char c : s) {
        
            if (c >= 'a' || c >= 'A')
                answer = false;
        }
    }
    else {
        answer = false;
    }

    return answer;
}
auto main()->int {

    string s;

    cin >> s;

    bool result = solution(s);

    cout << result;
}

*/