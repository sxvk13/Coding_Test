/*
*
*	Programmers Lv1 가운데 글자 가져오기
*
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();

    cout << size << endl;
    if (size % 2 == 0) {
        answer = s.substr(size / 2 - 1, 2);
    }
    else {
        answer = s.at((int)(size / 2));
    }
    return answer;
}
auto main()->int {
    string s;
    cin >> s;

    string result = solution(s);

    cout << result;
}
*/