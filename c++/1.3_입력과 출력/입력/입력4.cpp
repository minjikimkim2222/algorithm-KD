#include <bits/stdc++.h>

/*
    scanf는 주로 입력형식이 까다로울 때 사용, 보통은 cin

    %d -- int
    %c -- char
    %s -- string
    %lf -- double
    %ld -- long long
*/
using namespace std;

int a;
double b;
char c;

int main(){
    scanf("%d %lf %c", &a, &b, &c);

    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%c\n", c);
}