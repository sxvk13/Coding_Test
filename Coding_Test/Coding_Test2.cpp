/*
*
* 구름 Level 행복은 성적순이 아니잖아요.
* 
*/
/*
//메모리 릭 체크를 위한 코드
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
//
#include <iostream>
#include <algorithm>
#include <string>

//메모리 릭 상세 확인을 위한 코드
#ifdef  _DEBUG
#define new new ( _NORMAL_BLOCK, __FILE__,__LINE__)
#endif

using namespace std;

typedef struct Classes {
	
	//과목별 학생수 , 등수, a+비율, 평가개수, 과락기준, 받은 점수
	int iClassStudents=0, iGrade=0, iRate=0, iTest=0, iFail=0, *iScore=NULL;
	// a+ 기준 등수
	int iResult = 0;
	bool bCheck = true;

}T_Class;



int main() {

	//구름이가 듣는 수업의 개수 1~20개
	int iClass;
	cin >> iClass;
	
	//수업 개수만큼 구조체 배열 동적할당.
	T_Class *Class = new T_Class[iClass];

	for (int i = 0; i < nClass; ++i) {
		cin >> Class[i].iClassStudents>> Class[i].iGrade >> Class[i].iRate >> Class[i].iTest >> Class[i].iFail;

		// a+ 기준 백분위 -> a+ 기준 등수
		Class[i].iResult = Class[i].iClassStudents * ((float)Class[i].iRate / 100);

		// 계산된 a+ 기준 등수 Class->nResult 보다 높아야 a+
		if (Class[i].iGrade >= Class[i].iResult) {
			Class[i].bCheck = false;
		}
		
		
		//수행평가 점수 배열 동적할당
		Class[i].iScore = new int[Class[i].iTest];

		//수행평가 점수 입력
		for (int j = 0; j < Class[i].iTest; ++j) {
			cin >> Class[i].iScore[j];
			if (Class[i].iScore[j] <= Class[i].iFail) {
				Class[i].bCheck = false;
			}
		}
	}
	for (int i = 0; i < iClass; ++i) {
		if (!Class[i].bCheck) {
			cout << 0;
			break;
		}
		else if (i == iClass - 1 && Class[i].bCheck == true) {
			cout << 1;
		}
	}
	//수업 구조체 배열 메모리 해제
	for (int i = 0; i < iClass; ++i) {
		delete[] Class[i].iScore;
	}
	delete[] Class;

	//메모리 릭 체크
	_CrtDumpMemoryLeaks();
	return 0;
}
*/