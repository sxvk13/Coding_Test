/*
*
*	Programmers Lv1 예산
*
*/
/*

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int PartCnt(vector<int>d, int size,int budget) {
    vector<int>tmp = d;
    sort(tmp.begin(), tmp.end());
    int cnt = 0;
    int sum = 0;
    vector<int>::iterator itr = tmp.begin();
    for (; itr != tmp.end();++itr) {
        sum += *itr;
        if (sum == budget) {
            cnt = itr - tmp.begin()+1;
            break;
        }
        else if (sum > budget) {
            cnt = itr - tmp.begin();
            break;
        }
        else {
            cnt = itr - tmp.begin()+1;
        }
    }

    return cnt;
}
int solution(vector<int> d, int budget) {
    int answer = 0;
    
    int size = d.size();
   
    return answer = PartCnt(d, size, budget);
}
 auto main()->int {
    vector<int> d;
    int n;
    int budget;
    cin>>n;


    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        d.push_back(num);
    }
    cin >> budget;

    int result = solution(d, budget);

    cout << result;
}
*/
