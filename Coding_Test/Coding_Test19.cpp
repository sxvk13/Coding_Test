/*
*
*	Programmers Lv1 문자열을 정수로 바꾸기
*
*
*/
/*
    stoi 함수 사용
    #include <string>
    #include <vector>
    #include <iostream>


    using namespace std;

    int solution(string s) {
        int answer = 0;
        string str = s;

        answer = stoi(str);

        return answer;
    }
*/
/*
#include <string>
#include <vector>
#include <iostream>


using namespace std;

int calExp(int exp) {
    if (exp ==0) {
        return 1;
    }else{
        return 10 * calExp(exp - 1);
    }
}

int solution(string s) {
    int answer = 0;
    vector<int> exp;
    int size = s.size();
    if (s.at(0) == '-'|| s.at(0) == '+') {
        for (int i = size - 2; i >= 0; --i) {
            exp.push_back(calExp(i));
        }

        for (int i = 1; i <size; ++i) {
            answer += ((int)s.at(i) - '0') * exp.at(i-1);
        } 
        if (s.at(0) == '-')
            answer *= -1;

    }
    else {
        for (int i = size - 1; i >= 0; --i) {
            exp.push_back(calExp(i));
        }

        for (int i = 0; i < size; ++i) {
            answer += ((int)s.at(i) - '0') * exp.at(i);
        }
    }


    return answer;
}
auto main()->int {
    string S;

    cin >> S;

    int result = solution(S);
    
    cout << result << "(" << typeid(result).name()<<")";
}
*/