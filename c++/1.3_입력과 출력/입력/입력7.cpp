/*
    입력6 -- cin, getline 같이 쓸 때 주의할 점!!

    cin으로 점수를 입력받은 후, cin.ignore()을 사용해, 버퍼에 남아있는 개행문자를 제거해야,
    getline이 정상적으로 작동한다 !!
*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
    int count = 0;
    string str;

    cin >> count; // 3\n
    cin.ignore(); // 버퍼에 남은 개행문자 flush!!

    for (int i = 0; i < count; i++){
        getline(cin, str); // hello\n
        cout << "str : " << str; // hello
    }
}