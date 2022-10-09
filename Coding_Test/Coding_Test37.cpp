/*
*
*	Programmers Lv1 부족한 금액 계산하기
*
*/
/*
#include <iostream>

using namespace std;
//재귀함수
//long long total(long long price, int cnt) {
//    long long result = price*cnt;
//    if (cnt == 0)
//        return result;
//    return result + total(price, cnt - 1);
//}

long long total(long long price, long long cnt) {
   //n(2a+(n-1)d)/2
   //a:첫째항, d:공차
    return cnt*(2*price+(cnt-1)*price)/2;
}

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long totalPrice = total((long long)price, (long long)count);

    return answer = (long long)money >totalPrice ? 0 : totalPrice-money;
}
auto main()->int {

    int p, m, c;
    cin >> p >> m >> c;
    long long result = solution(p,m,c);

    cout << result;

}
*/
