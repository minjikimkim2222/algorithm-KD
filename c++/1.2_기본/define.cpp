/*
    #define <이름> <값>

    define을 통해, 상수 / 매크로 정의 가능
*/

// PI이라는 상수를 정의하고, for반목문을 loop라는 문자열로 치환

#include <bits/stdc++.h>

using namespace std;

#define PI 3.141592
#define loop(x, n) for (int x = 0; x < n; x++)

int main(){
    cout << PI << '\n';

    string str = "test";

    loop(i, 10) {
        cout << str << '\n';
    }

    int sum = 0;
    
    loop(i, 10) {
        sum += i;
    }

    cout << "sum : " << sum;
}

