/*
*
*	Programmers Lv1 이상한 문자 만들기
*
*/
/*
* // 문자열 대소문자 변환 : toupper, tolower 
* // 짝수,홀수 판별: 증가하는 값 n 을 비트연산. ex) n=1, n & 1 하면 해당 값은 참이며
* // 참, 거짓에 따라 짝수 홀수값 할당
* 
#include <string>
#include <vector>
#include <iostream>

using namespace std;
string convert(string S) {
    string str;
    string::iterator itr = S.begin();
    for (; itr != S.end(); ++itr) {
        int idx = itr - S.begin();
   
        if (idx % 2 == 0) {
            if (*itr >= 'a' && *itr <= 'z') {
                str.push_back((*itr)-32);
            }
            else {
                str.push_back(*itr);
            }
        }
        else if (idx % 2 == 1) {
            
            if (*itr >= 'A' && *itr <= 'Z') {
                str.push_back((*itr) + 32);
            }
            else {
                str.push_back(*itr);
            }
        }
    }
    return str;
}

string solution(string s) {

    string answer = "";
    string tmp = "";
    string::iterator itr = s.begin();
    for (; itr !=s.end() ; ++itr) {
        if (*itr == ' ') {
            tmp.push_back(*itr);
            answer.append(convert(tmp));
            tmp.clear();
        }
        else {
            tmp.push_back(*itr);
        }
    }
    answer.append(convert(tmp));
    return answer;
}

auto main()->int {

    
    string S = {};
    getline(cin, S);

    string result = solution(S);

        cout << result;
   
}
*/