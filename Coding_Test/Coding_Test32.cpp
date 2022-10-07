/*
*
*	Programmers Lv1 내적
*
*/
/*

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    vector<int>::iterator itr = b.begin();
    for (int i : a) {
        answer += i * *itr++;
    }
    
    
    return answer;
}
auto main()->int {

    int num;
    vector<int> a;
    vector<int> b;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int val;
        cin >> val;
        a.push_back(val);
    }
    for (int i = 0; i < num; ++i) {
        int val;
        cin >> val;
        b.push_back(val);
    }

    int result = solution(a,b);

    cout << result;
}*/