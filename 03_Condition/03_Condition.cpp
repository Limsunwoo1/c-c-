// 03_Condition.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <stdio.h>
#include <iostream>

int main()
{
    char d = 0;
    //printf("%", d);
    //scanf("%d", &d);
    std::cin >> d;
    std::cout << d;

    //1 왼쪽 2 오른쪽 3 위 4 아래
    int inputDirection = 3;
    if (inputDirection == 1)
    {
        std::cout << "왼쪽으로 1칸이동";
    }
    else if (inputDirection == 2)
    {
        std::cout << "오른쪽으로 1칸이동";
    }
    else if (inputDirection == 3)
    {
        std::cout << "위로로 1칸이동";
    }
    else if (inputDirection == 4)
    {
        std::cout << "아래로 1칸이동";
    }
    
    //
    if (inputDirection == 1)
    {
        std::cout << "왼쪽으로 1칸이동";
    }
    if (inputDirection == 2)
    {
        std::cout << "오른쪽으로 1칸이동";
    }
    if (inputDirection == 3)
    {
        std::cout << "위로로 1칸이동";
    }
    if (inputDirection == 4)
    {
        std::cout << "아래로 1칸이동";
    }




    return 0;
}
