#include <iostream>

//배열

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    //가독성을 해친다.
    //디버깅이 불편하다
    //보기좋은코드가 좋은코드다.
    //PlayerStatData archer = 1, solider = 2, magicion = 3, warrior = 4;

    std::cout << a << b << c << d;

    std::cout << std::endl;

    int arr[4] = { 1,2,3,4 };
    //인덱스 [0]
    arr[0] = 7;
    arr[3] = 100;
    //arr[4] = 500; 인덱스 넘어가게 사용하는것 주의해줘야한다.
    //std::cout << arr[0] << arr[1] << arr[2] << arr[3];

    //일반 for문을 통한 배열 순회
    for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i];
    }

    //범위기반 for문을 통한 배열 순회
    for (int indexValue : arr)
    {
        std::cout << indexValue;
    }


    int arr2[5][5] = {};
    arr2[0][0] = 100;
    arr2[2][3] = 100;

    for (size_t y = 0; y < 5; y++)
    {
        for (size_t x = 0; x < 5; x++)
        {
            std::cout << arr2[y][x];
        }
    }


    return 0;
}

