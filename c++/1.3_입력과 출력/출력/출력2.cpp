/*
    cout의 실수타입 출력 
*/

#include <bits/stdc++.h>

using namespace std;

double a = 1.234569898;

int main(void){
    cout << "a : " << a << '\n'; 
    // 1.23457 -- cout은 기본적으로, 소수점 아래 여섯번째 자리에서 반올림해줌

    // fixed << setprecision(자릿수) 로 설정 가능
    cout << fixed << setprecision(3) << a << '\n'; //-- 1.235

    cout << fixed << setprecision(8) << a << '\n'; // -- 1.23456990
}