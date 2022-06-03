/*
*
* 구름 Level 거울단어(미완)
*/
/*
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {

	string strChar = { "bdilmnopqszuvwx" };
	int iTc, iCnt;
	bool flag = true;
	cin >> iTc;
	string* arrWord = new string[iTc];
	map<char, char> mp;
	mp.insert({ 'b','d' });	mp.insert({ 'd','b' });
	mp.insert({ 'p','q' });	mp.insert({ 'q','p' });

	mp.insert({ 's','z' });	mp.insert({ 'z','s' });

	mp.insert({ 'i','i' });	mp.insert({ 'l','l' });
	mp.insert({ 'm','m' });	mp.insert({ 'n','n' });
	mp.insert({ 'o','o' });	mp.insert({ 'u','u' });
	mp.insert({ 'v','v' });	mp.insert({ 'w','w' });
	mp.insert({ 'x','x' });


	for (int i = 0; i < iTc; ++i) {
		cin >> arrWord[i];
	}

	for (int i = 0; i < iTc; ++i) {
		int iLen = arrWord[i].size();
		iCnt = 0;
		flag = true;
		if (iLen == 1) {
			if (strChar.find_first_of(arrWord[i][0]) != string::npos) {
				if (arrWord[i].compare("b") != 0 && arrWord[i].compare("d") != 0 &&
					arrWord[i].compare("s") != 0 && arrWord[i].compare("z") != 0 &&
					arrWord[i].compare("p") != 0 && arrWord[i].compare("q") != 0)
					cout << "Mirror" << endl;
				else
					cout << "Normal" << endl;
			}
			else
				cout << "Normal" << endl;

		}
		else {
			if (iLen % 2 == 1) {
				try {
					if (arrWord[i][iLen / 2] != mp.at(arrWord[i][iLen / 2])) {
						flag = false;
					}
					else {
						for (int j = 0; j < iLen / 2 - 1; ++j) {
							try {
								if (mp.at(arrWord[i][j]) != arrWord[i][iLen - 1 - j]) {
									flag = false;
								}
							}
							catch (out_of_range) {
								flag = false;
							}
						}
					}
				}
				catch (out_of_range) {
					flag = false;
				}
			}else {
				for (int j = 0; j < iLen / 2; ++j) {
					try {
						if (mp.at(arrWord[i][j]) != arrWord[i][iLen - 1 - j]) {
							flag = false;
						}
					}
					catch (out_of_range) {
						flag = false;
					}
				}
			}
			if (!flag) {
				cout << "Normal" << endl;
			}
			else {
				cout << "Mirror" << endl;
			}
		}

	}
	
	delete[] arrWord;
	return 0;

}
*/
