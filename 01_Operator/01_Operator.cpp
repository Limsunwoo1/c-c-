#include <iostream>

int main()
{
    //연산자

    // + - / %

    int result = 0;
    int num = 0;
    num = 4 + (5 * 2);
    //num += 3;
    //num -= 5;

    //전위 연산자
    num--;
    result = num--;

    --num;

    //후위 연산자
    num++;
    num--;

    // 주석 ctrl + k + c
    // 주석 해제 ctrl + k + u
    //num = 4 * 5;
    //num *= 3;

    //num = 4 - 5;
    //num -= 3;

    //num = 4 / 5;
    //num /= 3;

    //num == 12
    num = 12;
    int mod = 0;
    mod = num % 5;


    int ret = (mod > 0 ? 1 : -1);

    // 비트 연산자

    // & AND
    // | OR
    // ^ XOR
    // ~ NOT
    // >> << 시프트



    return 0;
}

