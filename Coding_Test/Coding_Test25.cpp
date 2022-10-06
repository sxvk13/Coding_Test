/*
*
*	Programmers Lv1 핸드폰 번호 가리기
*
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string Encryption(string phone_number) {
    string str = phone_number;
    int leng = str.length()-4;
   
    for (int i = 0; i < leng; ++i) {
        str.at(i) = '*';
    }
    return str;
}


string solution(string phone_number) {
    string answer = "";
    
    answer = Encryption(phone_number);

    return answer;
}
auto main()->int {

    std::string phone_number;
    cin >> phone_number;

    string result = solution(phone_number);

    cout << result;
}
*/