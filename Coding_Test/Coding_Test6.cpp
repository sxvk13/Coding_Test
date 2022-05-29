/*
*
* 구름 Level 여름의 대삼각형
*
*/
/*
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

double CalcArea(int arrPos[3][2], double dist1, double dist2, double big);

int main() {

	int arrPos[3][2] = {};
	for (int i = 0; i < sizeof(arrPos) / sizeof(arrPos[0]); ++i) {
		cin >> arrPos[i][0] >> arrPos[i][1];
	}
	//좌표 평면 위 두점 사이 거리
	//sqrt((x2-x1)^2 + (y2-y1)^2)
	//점 AB거리
	double dDistAB = sqrt(pow(arrPos[1][0] - arrPos[0][0], 2) + pow(arrPos[1][1] - arrPos[0][1],2));
	//점 AC거리
	double dDistAC = sqrt(pow(arrPos[2][0] - arrPos[0][0], 2) + pow(arrPos[2][1] - arrPos[0][1], 2));
	//점 BC거리
	double dDistBC = sqrt(pow(arrPos[2][0] - arrPos[1][0], 2) + pow(arrPos[2][1] - arrPos[1][1], 2));

	//가장 큰 변 찾기

	double dBig = dDistAB >= dDistAC ? dDistAB >= dDistBC ? dDistAB : dDistBC : dDistAC >= dDistBC ? dDistAC : dDistBC;


	//소수점 2번째자리까지 표현 고정
	cout << fixed;
	cout.precision(2);
	// 가장 큰 변에 따른 삼각형 만들어지는지 여부 판단.
	if (dBig == dDistAB)
	{
		double dResult = CalcArea(arrPos, dDistAC, dDistBC, dBig);

		cout << dResult;
	}
	else if (dBig == dDistAC) {

		double dResult = CalcArea(arrPos, dDistAB, dDistBC, dBig);
	
		cout << dResult;
	}
	else {

		double dResult = CalcArea(arrPos, dDistAB, dDistAC, dBig);
		
		cout << dResult;
	}
	return 0;
}
// 넓이 계산 함수
double CalcArea(int arrPos[3][2], double dist1, double dist2, double big) {

	//좌표평면위 세 점의 좌표를 알 때 삼각형의 넓이 구하는 공식
			// 0.5*|((x1y2+x2y3+x3y1)-(x2y1+x3y2+x1y3))|
	double dArea = 0.5 * abs((arrPos[0][0] * arrPos[1][1] + arrPos[1][0] * arrPos[2][1] +
		arrPos[2][0] * arrPos[0][1]) - (arrPos[1][0] * arrPos[0][1] + arrPos[2][0] * arrPos[1][1] +
			arrPos[0][0] * arrPos[2][1]));

	if (dist1 + dist2 < big) {
		return 0.00;
	}
	//소수점 자리수 조절하여 반올림 하기 공식 1 [round() 이용]
	// round(값 * 10^자리수) / 10^자리수
	//return round(dArea * pow(10, 3)) / pow(10, 3);
	//소수점 자리수 조절하여 반올림 하기 공식 1 [floor() 이용]
	// floor(값 * 10^자리수 + 0.5f) / 10^자리수
	return floor(dArea * pow(10, 3) + 0.5f) / pow(10, 3);
}
*/
