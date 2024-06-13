#include <bits/stdc++.h>

using namespace std;

/*
    cin은 공백, 개행문자 직전까지만 입력받는다고 했다.
    그렇다면, "김현 지 완전히 파이팅이다 ! ! ! "는 어떻게 한번에 받을까?
    ->> getline

    getline은 
        1) 기본적으로 개행문자('\n')을 줄의 끝으로 인식해, "그 개행 문자 직전"까지 문자를 받는다!
        2) 또다른 종결문자를 사용하고 싶다면, 세번째 인자로 추가해준다.
*/
int main(){
    string str;

    getline(cin, str);

    cout << "str : " << str << '\n';

    string str2;
    // input : " 저의 종결 문자는 ! 로 하고 싶네요 !! ! "
    getline(cin, str2, '!');

    cout << "str2 : " << str2;

}