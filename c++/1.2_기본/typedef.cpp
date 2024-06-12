/*
    typedef <타입> <별칭>

    타입의 이름을 새로이 별칭으로 정의하고, 실제 타입이름 대신 별칭으로 사용
    c++에서 이미 정의한 타입이나, 사용자가 정의한 타입(struct, class)에 별칭 지정 가능
*/

#include <bits/stdc++.h>

using namespace std;

typedef int i; // int형을 i로

int main(){
    i a = 3;
    cout << a << '\n';

    return 0;
}