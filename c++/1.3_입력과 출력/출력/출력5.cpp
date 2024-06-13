/*
    printf에서 출력형식 종류
*/

#include <bits/stdc++.h>

using namespace std;

int a = 1;
char s = 'a';
string str = "인사이드 아웃";
double d = 2.12432234;

int main(){
    printf("a : %d\n", a);
    printf("b : %c\n", s);
    
    // printf("str : %s\n", str); -- error !!!
    printf("str : %s\n", str.c_str());
    // printf 기반으로 문자열을 출력하려면, string을 문자열에 대한 포인터(char *) 타입으로 바꿔주는 게 좋기 때문

    printf("d : %lf\n", d);
}