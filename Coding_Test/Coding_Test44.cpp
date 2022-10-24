/*
*
*	Programmers Lv1 시저 암호
*
*/
/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

char shiftAlpha(char ch, int n) {
    int result = (int)ch+n;
    if (ch <= 'z' && ch >= 'a') {
        
        if (result > (int)'z') {
            result = 'a' + n - ('z' - ch) - 1;
        }
    }
    else if (ch <= 'Z' && ch >= 'A') {
        if (result > (int)'Z') {
            result = 'A' + n - ('Z' - ch)-1;
        }
    }
    else {
        return ch;
    }
       
    return (char)result;
}
string solution(string s, int n) {
    string answer = "";
  
    for(char ch :s){
       answer.push_back(shiftAlpha(ch, n));
    }
    return answer;
}

auto main()->int {

    string s;
    int n;

    getline(cin, s);
    cin>> n;

    string result = solution(s, n);

    cout << result;

}
*/
