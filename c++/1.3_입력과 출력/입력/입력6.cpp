/*
    cin과 getline을 함께 쓸 때 주의해야 할 점!!

    cin : 
        키보드로 입력된 내용은 먼저 '입력버퍼'에 저장된다. 
        그후, cin을 사용하면 입력버퍼에서 데이터를 읽어들이는데, 공백문자(띄어쓰기, 개행문자) 직전까지만 읽어온다.

    getline :
        getline(cin, str)
        첫번째 매개변수에서 지정한 입력스트림(cin)으로부터, 개행 직전까지 입력받아, 두번째 매개변수(str)에 할당한다.

    문제상황:
        사용자가 cin을 이용해, 정수값을 입력한다.
        cin은 입력된 정수만 읽고, "개행문자는 버퍼에 남겨둔다."
        그후 getline을 호출하면, 버퍼에 남아있는 개행문자가 읽히게 되어 첫번째 호출에서의 getline은 빈 문자열 할당받음..ㅜㅜ
    
        [예시입력]
        3
        Hello
        World
        Java
*/

// 문제상황 코드
#include <bits/stdc++.h>

using namespace std;

int main(){
    int count = 0;
    string str;

    cin >> count; // count = 3
    // 여기서 cin은 정수만 읽고, 개행문자는 남겨둔다.. -- 입력버퍼 상황 "\nHello\nWorld\nJava"

    for (int i = 0; i < count; i++){
        getline(cin, str); // 첫번째 호출에서는, 입력버퍼에 남아있는 개행문자를 읽어 '빈 문자열'을 반환한다!!
        cout << "str : " << str;
    }

    return 0;
}

// 이런 문제사항을 입력7.cpp에서 고쳐보자 ! ! 