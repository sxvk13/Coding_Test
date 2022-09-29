/*
*
*	Programmers Lv1 정수 내림차순으로 배치하기
*
* 
*/
/* 라이브러리 미사용
#include <string>
#include <vector>
#include <iostream>

using namespace std;


string strSwap(string str, int len) {
    string result = str;
    char tmp;
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (result[i] < result[j]) {
                tmp = result[i];
                result[i] = result[j];
                result[j] = tmp;
            }
        }
    }
    return result;
}
int calPow(int p) {
    int exp = 1;
    for (int i = 0; i < p; ++i)
        exp *= 10;
    return exp;
}
long long solution(long long n) {
    long long answer = 0;
    
    string n2str = to_string(n);
    int len = n2str.size();
    
    n2str=strSwap(n2str, len);

    int p = len - 1;
   for (auto s : n2str) {
        int val = (int)s - '0';
        int exp = calPow(p);
        answer += ((long long)val * exp);
        --p;
    }

    
    return answer;

}*/
/* sort라이브러리 사용
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer;
    string n2str = to_string(n);
    //오름 차순
    //sort(n2str.begin(),n2str.end());
    //내림 차순 
    sort(n2str.begin(), n2str.end(),greater<char>());
    answer = stoll(n2str);
    
    return answer;
}

auto main()->int {
    long long N;
    cin >> N;
    long long result = solution(N);
    cout << result;
}
*/