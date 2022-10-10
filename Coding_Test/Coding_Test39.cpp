/*
*
*	Programmers Lv1 최대공약수와 최소공배수

*
*/
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    vector<int> value;
    value.push_back(n);
    value.push_back(m);
    sort(value.begin(), value.end());

    if (value.at(1) % value.at(0) == 0) {
        answer.at(0)= value.at(0);
        answer.at(1)= value.at(1);
    }
    else {
        for (int i = 1; i < value.at(0); ++i) {
            if (value.at(1) % i == 0 && value.at(0) % i == 0) {
                answer.at(0) = i;
                answer.at(1) = (value.at(1) / i) * (value.at(0) / i) * i;
            }
            else {
                continue;
            }
        }
    }
    return answer;
}
auto main()->int {
    
    int N, M;

    cin >> N >> M;


    vector<int>result = solution(N,M);

    vector<int>::iterator itr = result.begin();
    for (; itr != result.end(); ++itr) {
        cout << *itr << " ";
    }
}
*/