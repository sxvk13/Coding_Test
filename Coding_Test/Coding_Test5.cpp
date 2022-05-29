/*
*
* 구름 Level 고장난 컴퓨터
*
*/
/*
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	// 입력 값 유지시간, 입력 횟수, 남은 수
	int iKeepTime;
	int iKeyPushCnt;
	// 입력값의 범위가 1이상이므로 1로 초기화
	int iCnt = 1;

	cin >> iKeyPushCnt>>iKeepTime;

	//입력 횟수에 따른 입력시간
	int *arrKeyPushTime = new int[iKeyPushCnt];

	//입력 시간 저장
	for (int i = 0; i < iKeyPushCnt; ++i) {
		cin >> arrKeyPushTime[i];
	}
	
	//이전 입력부터 다음입력까지의 시간을 계산
	//유지시간보다 길 경우 마지막값만 유지하므로 1 대입.
	//그렇지 않으면 남은 수 증가.
	for (int i = 1; i <iKeyPushCnt ; ++i) {
		if (arrKeyPushTime[i] - arrKeyPushTime[i - 1] > iKeepTime) {
			iCnt = 1;
		}
		else {
			++iCnt;
		}
	}

	cout << iCnt;

	delete[] arrKeyPushTime;
	return 0;
}
*/
