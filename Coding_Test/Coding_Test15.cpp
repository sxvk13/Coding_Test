/*
*
*	Programmers Lv1 자연수 뒤집어 배열로 만들기
*
*/
/*#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str;

    str = to_string(n);
    int size = str.size();
 
    for (auto i = size - 1; i >= 0;--i) {
        answer.push_back((int)str.at(i) - '0');
    }
    return answer;
}
auto main()->int {
    long long N;
    cin>>N;
    
    vector<int> result = solution(N);
    
    cout << "[";
    for (auto i : result) {
        if (i == *(result.end() - 1))
            cout << i << "]";
        else
            cout << i << ",";
    }
 }
 */