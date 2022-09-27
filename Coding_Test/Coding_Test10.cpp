/*
*
* 구름 Level 앵무새 꼬꼬
*/
/**/
/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int iNum;
	cin >> iNum;
	cin.ignore();

	string *str=new string[iNum];
	string strVowel;

	for (int i = 0; i < iNum; ++i) {
		getline(cin, str[i]);
	}
	for (int i = 0; i < iNum; ++i) {

		transform(str[i].begin(), str[i].end(), str[i].begin(), tolower);
		for (int j = 0; j < str[i].length(); ++j) {
			if (str[i].find_first_of('a') || str[i].find_first_of('e') ||
				str[i].find_first_of('i') || str[i].find_first_of('o') ||
				str[i].find_first_of('u')) {

			}
		}
	}




	return 0;
}*/