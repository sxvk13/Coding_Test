﻿/*
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
	int nClassStudents=0, nGrade=0, nRate=0, nTest=0, nFail=0, *nScore=NULL;
	// a+ 기준 등수
	int nResult = 0;
	bool bCheck = true;

}T_Class;



int main() {

	//구름이가 듣는 수업의 개수 1~20개
	int nClass;
	cin >> nClass;
	
	//수업 개수만큼 구조체 배열 동적할당.
	T_Class *Class = new T_Class[nClass];

	for (int i = 0; i < nClass; ++i) {
		cin >> Class[i].nClassStudents>> Class[i].nGrade >> Class[i].nRate >> Class[i].nTest >> Class[i].nFail;

		// a+ 기준 백분위 -> a+ 기준 등수
		Class[i].nResult = Class[i].nClassStudents * ((float)Class[i].nRate / 100);

		// 계산된 a+ 기준 등수 Class->nResult 보다 높아야 a+
		if (Class[i].nGrade >= Class[i].nResult) {
			Class[i].bCheck = false;
		}
		
		
		//수행평가 점수 배열 동적할당
		Class[i].nScore = new int[Class[i].nTest];

		//수행평가 점수 입력
		for (int j = 0; j < Class[i].nTest; ++j) {
			cin >> Class[i].nScore[j];
			if (Class[i].nScore[j] <= Class[i].nFail) {
				Class[i].bCheck = false;
			}
		}
	}
	for (int i = 0; i < nClass; ++i) {
		if (!Class[i].bCheck) {
			cout << 0;
			break;
		}
		else if (i == nClass - 1 && Class[i].bCheck == true) {
			cout << 1;
		}
	}
	//수업 구조체 배열 메모리 해제
	for (int i = 0; i < nClass; ++i) {
		delete[] Class[i].nScore;
	}
	delete[] Class;

	//메모리 릭 체크
	_CrtDumpMemoryLeaks();
	return 0;
}
*/