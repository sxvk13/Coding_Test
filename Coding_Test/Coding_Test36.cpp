/*
*
*	Programmers Lv1 행렬의 덧셈
*
*/
/*

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); ++i) {
        vector<int> tmp;
        for (int j = 0; j < arr1[0].size(); ++j) {
            tmp.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(tmp);
    }
    

    return answer;
}
auto main()->int {

    int num1, num2;
    vector<vector<int>> arr1;
    vector<vector<int>> arr2;
    cin >> num1 >> num2;
    for (int i = 0; i < num1; ++i) {
        vector<int> tmp;
        for (int j = 0; j < num2; ++j) {
            int val;
            cin >> val;
            tmp.push_back(val);
        }
        arr1.push_back(tmp);
    }
    for (int i = 0; i < num1; ++i) {
        vector<int> tmp;
        for (int j = 0; j < num2; ++j) {
            int val;
            cin >> val;
            tmp.push_back(val);
        }
        arr2.push_back(tmp);
    }

    vector<vector<int>> result = solution(arr1, arr2);

    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            cout << result[i][j] << " ";
        }
    }

}
*/