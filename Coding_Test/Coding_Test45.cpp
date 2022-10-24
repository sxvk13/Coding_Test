/*
*
*	Programmers Lv1 [1차] 비밀지도
*
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


// Vec to Str
string V2S(vector<int> v) {
    string str;

    for (int i : v) {
        if (i == 1) {
            str.push_back('#');
        }
        else {
            str.push_back(' ');
        }
        
    }

    return str;
}


// 비트연산
vector<int> Oper(vector<int> b_Vec1, vector<int> b_Vec2) {

    int size = b_Vec1.size();
    vector<int> result(size);
    for (int i = 0; i < size; ++i) {
        result.at(i) = b_Vec1.at(i) | b_Vec2.at(i);
    }
    return result;
}
// Dec to Bin
vector<int> D2B(int val,int size) {
    vector<int> result;
    int tmp = val;
    
    while (tmp >0) {
        result.insert(result.begin(),(tmp % 2));
        tmp /= 2;
    }
    int r_size = result.size();

    if (r_size < size) {
        for(int i=0;i<size-r_size;++i)
        result.insert(result.begin(), 0);
    }

    
    return result;
}


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    vector<int> temp;
    vector<int> temp2;
    for (int i = 0; i < n;++i)
    {
       temp = D2B(arr1.at(i),n);
       temp2 = D2B(arr2.at(i), n);
       answer.push_back(V2S(Oper(temp, temp2)));
    }

    return answer;
}

auto main()->int {
	
    int n;
    vector<int> arr1;
    vector<int> arr2;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        arr1.push_back(val);
    }
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        arr2.push_back(val);
    }

    vector<string> result = solution(n, arr1, arr2);
    for (string str : result) {
        cout << str<< endl;
    }
}
*/