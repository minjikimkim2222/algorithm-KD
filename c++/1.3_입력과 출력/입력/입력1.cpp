/*
    cin : 공백, 개행문자 직전까지만 입력받는다.
    scanf : 형식을 지정해서 입력받음
*/

#include <bits/stdc++.h>

using namespace std;

int a;

int main(){
    cin >> a;
    cout << "cin : " << a << '\n';

    scanf("%d", &a);

    cout << "scanf : " << a;
    return 0;
}