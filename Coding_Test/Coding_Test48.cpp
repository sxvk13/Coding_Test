/*
*
*	Programmers Lv1 햄버거 만들기
*
*/
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//통과 코드 
bool CheckVec(int element, int n_element, int nn_element, int nnn_element ) {
    if (element == 1 && n_element == 2 && nn_element == 3 && nnn_element == 1)
        return true;
    else
        return false;
}

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int>::iterator itr = ingredient.begin();

    for (; itr != ingredient.end()-3;) {
        if (CheckVec(*itr, *(itr + 1), *(itr + 2), *(itr + 3))) {
            answer++;
            ingredient.erase(itr, itr + 4);// 주의 earse범위는 [first, end) 
            itr = ingredient.begin();
        }
        else {
            itr++;
        }
        if (ingredient.size() < 4) {
            break;
        }
        
    }

    return answer;
}
auto main()->int {
    vector<int> ingredient;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        ingredient.push_back(val);
    }
    int result = solution(ingredient);

    cout << result;
}
*/