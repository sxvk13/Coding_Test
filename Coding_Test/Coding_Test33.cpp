/*
*
*	Programmers Lv1 문자열 내림차순으로 배치하기
*
*/
/*

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), greater<char>());
    return answer = s;
}
auto main()->int {
    string s;
    cin >> s;
    string result = solution(s);
    cout << result;
}
*/