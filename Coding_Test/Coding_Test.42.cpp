/*
*
*	Programmers Lv1 3진법 뒤집기
*
*/
/*

#include <string>
#include <vector>
#include <iostream>

using namespace std;
int calExp(int n) {
    if (n <1) {
        return 1;
    }
    else {
        return 3*calExp(n - 1);
    }
}

int cal(vector<int> n) {
    int result = 0;;
    int size = n.size();
    int exp;
    int cnt = 1;
    for (int i : n) {
        exp = calExp(size - cnt++);
        result += (i *exp);
    }

    return result;
}
int solution(int n) {
    int answer = 0;
    int tmp = n;
    vector<int> n3;
    
    while (tmp>0) {
        n3.push_back(tmp % 3);
        tmp/= 3;
    }
    
    return answer=cal(n3);
}

auto main()->int {

    int n;
    cin >>n;
    int result = solution(n);

    cout << result;

}
*/