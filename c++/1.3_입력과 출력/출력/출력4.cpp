/*
    printf 출력형식을 이용해,
    소수점 6자리까지
    2는 02
    12는 12 출력
*/

#include <bits/stdc++.h>

using namespace std;

double a = 1.234567982;
int b = 12;
int c = 2;

int main(void){
    printf("%lf\n", a); // 1.234568
    printf("%.3lf\n", a); // 1.235

    printf("%03d\n", b); // 012
    printf("%05d\n", b);  // 00012

    printf("%02d\n", c); // 02
    return 0;
}