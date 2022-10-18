// Note.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#define NOT 987654321

int map[4][4] =
{
    0, 50, NOT, 20,
    NOT, 0, 5, NOT,
    NOT, NOT, 0, NOT,
    NOT, 10, 25, NOT,
};


int result[4] = { 0, 50, NOT, 20 };
int via[4] = {1, 0, 0, 0};

int findMin()
{
    int min = 21e8;
    int minIndex = -1;

    for (size_t i = 0; i < 4; i++)
    {
        if (via[i] == 0 && result[i] < min)
        {
            min = result[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main()
{
    int min = 987654321;
    int minIndex = -1;

    for (size_t x = 0; x < 3; x++)
    {
        minIndex = findMin();

        for (size_t y = 0; y < 4; y++)
        {
            int a = result[minIndex] + map[minIndex][y];
            int b = result[y];

            if (a < b)
                result[y] = a;
        }

        via[minIndex] = 1;
    }





    return 0;
}

