/*
*
* 구름 Level 의좋은 형제
*
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	//식량의 양 N1, N2
	int nFood_1, nFood_2;

	//식략의 양 입력받음.
	cin >> nFood_1 >> nFood_2;
	
	// 알고 싶은 날 
	int nDay;
	// 알고싶은 날 입력받음.
	cin >> nDay;

	for (int i = 1; i <= nDay; ++i) {
		//N1의 식량 -> N2
		if (i % 2 != 0) {
			//홀수 처리
			if (nFood_1 % 2 == 1) {
				nFood_2 += (nFood_1/2+1);
				nFood_1 /= 2;

			}
			else {
				nFood_2 += (nFood_1 / 2);
				nFood_1 /= 2;
			}
		}
		//N2의 식량 ->N1
		else {
			//홀수 처리
			if (nFood_2 % 2 == 1) {
				nFood_1 += (nFood_2/2 + 1);
				nFood_2 /= 2;
			}
			else {
				nFood_1 += (nFood_2/2);
				nFood_2 /= 2;
			}
		}
	}

	cout << nFood_1 << " " << nFood_2;
	return 0;

}
