// 10_Recursive.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int arr[256] = {1,2,3,4};

void CirculateArray(int level)
{
    std::cout << arr[level];
    if (level == 3)
        return;

    CirculateArray(level + 1);
}

void dfs(int level)
{
    if (level == 2)
        return;

    dfs(level + 1);
    dfs(level + 1);
}

int main()
{
    //CirculateArray(0);

    dfs(0);


    return 0;
}


