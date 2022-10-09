/*
*
*	Programmers Lv1 직사각형 별찍기
*
*/
/*

#include <iostream>

using namespace std;
void draw(long long size,long long a,long long cnt) {
    if (cnt > size)
        return;
    cout << "*";
    if (cnt % a == 0&& size!=cnt)
        cout << "\n";
    draw(size, a,cnt+1);
}

int main(void) {
    
    int a;
    int b;
    cin >> a >> b;
  
    draw((long long)a*b,(long long)a,(long long)1);
   
    return 0;
}
*/