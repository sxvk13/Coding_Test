/*
*
*	Programmers Lv1 문자열 내 p와 y의 개수
*
*/
/*#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt = 0;
    int yCnt = 0;
    for (size_t i = 0; i < s.size();++i) {
        switch (s.at(i)) {
        case 'p':
        case 'P':
            pCnt++;
            break;
        case 'y':
        case 'Y':
            yCnt++;
            break;
        default:
            continue;
        }
    }
    return answer=pCnt!=yCnt?false:true;
}
auto main()->int {
    string S;
    cin >> S;
    bool result =solution(S);

    cout << result;
}*/