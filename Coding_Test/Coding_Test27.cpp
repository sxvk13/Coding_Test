/*
*
*	Programmers Lv1 제일 작은 수 제거하기
*
*/
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
int searchMin(vector<T>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
   
    return *(arr.end() - 1);
}

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> temp = arr;

    int minVal = searchMin(arr);
    vector<int>::iterator idx= find(temp.begin(), temp.end(), minVal);
    vector<int>::iterator itr = temp.begin();
    for (; itr != temp.end(); ++itr) {
        if (itr == idx)
            continue;
        answer.push_back(*itr);
    }
    if (answer.empty())
        answer.push_back(-1);
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