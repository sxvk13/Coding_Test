/*
*
*	Programmers Lv1 자릿수 더하기
* 
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solution(int n)
{
    int answer = 0;
    string str = to_string(n);
    int length = str.length();
    
    for (int i = 0; i < length; ++i) {
        answer+=(int)str.at(i)-'0';
    }
  
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}

auto main()->int {
	
    int N;
    cin >> N;
    int result = solution(N);
}