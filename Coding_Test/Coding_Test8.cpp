/*
*
* 구름 Level 파손된 램
*/
/*
#include <iostream>

using namespace std;

int main() {
	int iRam, iRamCnt = 0;

	cin >> iRam;
	//램의 개수(iRam) 만큼의 메모리 용량 값(정수 M)을 저장하는 배열 동적할당.
	int *arrRamSize = new int[iRam];
	
	//고장난 램의 인덱스를 저장할 배열 동적할당.
	int *arrIndex =new int[iRam];
	
	//메모리 용량 값 입력
	for (int i = 0; i < iRam; ++i) {
		cin >> arrRamSize[i];
	}
	//각 배열에 저장된 값을 2로 인수분해
	for (int i = 0; i < iRam; ++i) {
		int iTemp = arrRamSize[i];
		while (iTemp > 2) {
			//나머지가 1인경우에는 2의 제곱수가 아님.
			if (iTemp % 2 == 1) {
				//해당 램의 인덱스를 저장
				arrIndex[iRamCnt] = i + 1;
				//고장난 램의 숫자 증가
				++iRamCnt;
				break;
			}
			//제곱수인 경우 조건문에 걸리지 않으므로 계속해서 몫을 2로 나누어 저장
			iTemp = iTemp / 2;
		}
	}

	cout << iRamCnt << endl;

	//고장난 램이 있을 경우 해당 램의 인덱스를 출력
	if (iRamCnt != 0) {
		for (int i = 0; i < iRamCnt; ++i) {
			cout << arrIndex[i] << " ";
		}
	}

	//사용한 동적 배열 메모리 해제
	delete[] arrRamSize;
	delete[] arrIndex;

	return 0;
}
*/
