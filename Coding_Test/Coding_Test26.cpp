/*
*
*	Programmers Lv1 나누어 떨어지는 숫자 배열
*
*/
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

template<typename T>
vector<int> Arr(vector<T>& arr, int divisor) {
    vector<int> result;
    
    vector<int>::const_iterator itr = arr.begin();

    for (; itr != arr.end(); ++itr) {
        if (*itr % divisor == 0) {
            result.push_back(*itr);
        }
    }
    if (result.empty()) {
        result.push_back(-1);
    }
    sort(result.begin(), result.end());
    
    return result;
}

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    answer = Arr(arr, divisor);
    return answer;

}
auto main()->int {

    int num;
    vector<int> arr;
    int divisor;
    
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    cin >> divisor;

    vector<int>result = solution(arr,divisor);

    vector<int>::iterator itr = result.begin();
    for (; itr != result.end(); ++itr) {
        cout << *itr<<" ";
    }
}

*/