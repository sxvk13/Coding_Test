/*
*
* ���� Level ���� ��ȯ
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

	// ����
	cin >> iNum;
	// ��ȯ�� ���
	cin >> iR;

	//r(����)�� ���� : 2~16
		for (int i = 2; i < 17; ++i) {
		//��� ���
		//������ ����
		int iTemp = iNum;

		//�������� �� ��ȯ�� ����
		while (iTemp > 0) {
			//sprinf�� ���� �������� 16���� ���ڷ� ����
			sprintf_s(chMod, "%X", iTemp % i);
			//string ��ü�� insert�Լ��� ����Ͽ� 0��° index (���� ��)�� ����� ���ڸ� ����.
			iMod.insert(0, chMod);
			//������ ����
			iTemp /= i;
		}
		//string ��ü�� compare�Լ��� ����Ͽ� ������ȯ�� ������ ���ڿ��� �Է¹��� ��ȯ�� ����� ��
		//compare �Լ��� ������ 0�� ��ȯ
		if (!iMod.compare(iR))
		{
			//������� �ش� i�� (����) �� r�̹Ƿ� ���̻� ���� �ʿ䰡 ����. ���� ���� �� �ݺ��� ����
			r = i;
			break;
		}
		else {
			//���� ���� ��� ���ڿ��� ����ְ� �ݺ��� ����.
			iMod.clear();
		}
	}

	cout << r << endl;
	return 0;
}
*/