/*
*
*	Programmers Lv1 최소직사각형
*
*/
/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> bigVal;
    vector<int> smallVal;
    vector<vector<int>>::iterator itr = sizes.begin();
    for (; itr != sizes.end(); ++itr) {
        if ((*itr).at(0) > (*itr).at(1)) {
            bigVal.push_back((*itr).at(0));
            smallVal.push_back((*itr).at(1));
        }
        else {
            bigVal.push_back((*itr).at(1));
            smallVal.push_back((*itr).at(0));
        }
    }

    sort(bigVal.begin(), bigVal.end());
    sort(smallVal.begin(), smallVal.end());

    int w = *(bigVal.end() - 1);
    int h = *(smallVal.end() - 1);

    answer = w * h;

    return answer;
}

auto main()->int {
    
    int n;
    vector<vector<int>> sizes;
    
    cin >> n;

    for (int i = 0; i < n; ++i) {
        vector<int> tmp;
        for (int j = 0; j < 2; ++j) {
            int val;
            cin >> val;
            tmp.push_back(val);
        }
        sizes.push_back(tmp);
    }
    
    int result = solution(sizes);
    cout << result;
}
*/