/*
*
*	Programmers Lv1 같은 숫자는 싫어
*
*/
/*

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    //효율성 테스트 실패
    // 
    //vector<int> answer = arr;
    //vector<int>::iterator itr = answer.begin();
    //while (itr != answer.end() - 1) {
    //    if (*itr == *(itr + 1)) {
    //        answer.erase(itr + 1);
    //    }
    //    else {
    //        ++itr;
    //    }
    //}
    
    //성공
    vector<int> answer;
    vector<int>::iterator itr = arr.begin();
    if (answer.empty())
        answer.push_back(*itr);
    for (; itr != arr.end(); ++itr) {
        if (answer.at(answer.size()-1) == *itr) {
            continue;
        }
        else {
            answer.push_back(*itr);
        }
    }
    
    return answer;
}
auto main()->int {
    
    int num;
    vector<int> arr;

    cin >> num;
    for (int i = 0; i < num; ++i) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    vector<int>result = solution(arr);

    vector<int>::iterator itr = result.begin();
    for (; itr != result.end(); ++itr) {
        cout << *itr << " ";
    }
}
*/
