/*
*
* 구름 Level 진법 변환
*
*/
/*

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int iNum;
	char chMod[2] = {};
	string iMod = {};
	string iR = {};
	int r = 0;

	// 정수
	cin >> iNum;
	// 변환된 결과
	cin >> iR;

	//r(진수)의 범위 : 2~16
		for (int i = 2; i < 17; ++i) {
		//결과 계산
		//정수를 복사
		int iTemp = iNum;

		//진수범위 내 변환을 진행
		while (iTemp > 0) {
			//sprinf를 통해 나머지를 16진수 문자로 저장
			sprintf_s(chMod, "%X", iTemp % i);
			//string 객체의 insert함수를 사용하여 0번째 index (제일 앞)에 저장된 문자를 삽입.
			iMod.insert(0, chMod);
			//나누기 진행
			iTemp /= i;
		}
		//string 객체의 compare함수를 사용하여 진수변환을 진행한 문자열과 입력받은 변환된 결과를 비교
		//compare 함수는 같으면 0을 반환
		if (!iMod.compare(iR))
		{
			//같을경우 해당 i값 (진수) 가 r이므로 더이상 비교할 필요가 없음. 따라서 대입 후 반복문 종료
			r = i;
			break;
		}
		else {
			//같지 않을 경우 문자열을 비워주고 반복문 진행.
			iMod.clear();
		}
	}

	cout << r << endl;
	return 0;
}
*/