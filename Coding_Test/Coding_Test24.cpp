/*
*
*	Programmers Lv1 서울에서 김서방 찾기
*
*/
/*#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer ="";
  // int idx = 0;
  // for (string i : seoul) {
  //     if (i=="Kim") {
  //         break;
  //     }
  //     idx++;
  // }
    int idx = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer="김서방은 "+to_string(idx)+"에 있다.";

    return answer;
}

auto main()->int {
    vector<string> seoul;
    string str;
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cin >> str;
        seoul.push_back(str);
    }
    
    string result = solution(seoul);

    cout << result;
}

*/