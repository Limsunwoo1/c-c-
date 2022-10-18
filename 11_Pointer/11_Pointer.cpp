// 11_Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include <vector>


#define JAPAN
#define USA
#define KOREA

int addition(int a, int b)
{
    return a + b;
}

int subtraciton(int a, int b)
{
    return a - b;
}

void printData()
{
    std::cout << 10;
}

int operation(int x, int y, int(*funcCall)(int, int))
{
    int g = 0;
    g = funcCall(x, y);

    return g;
}

int main()
{
#pragma region POINTER BASIC
    //int firstValue = 0;
    //int secondValue = 0;

    //int* p1 = nullptr;
    //int* p2 = nullptr;
    ////char ch     = '\0';
    ////int value   = 0;
    ////int data    = NULL;
    ////& 주소연산자 ( 해당 변수에 주소값을 가져온다 )
    //p1 = &firstValue;
    //p2 = &secondValue;

    //*p1 = 10;
    //*p2 = *p1;
    //p1 = p2;
    //*p1 = 20;

    //std::cout << "firstvalue is " << firstValue << '\n';
    //std::cout << "secondvalue is " << secondValue << '\n';


    //구조체에 한해서 (*).data 에 접근하는 방법을
    //  ->화살표로 간략하게 표현이가능하다.
    //void Input(Person* _a, Person* _b)
    //{
    //    std::cin >> (*_a).age >> (*_a).height;
    //    std::cin >> _b->age >> _b->height;
    //}

    //void Input(Person & _a, Person & _b)
    //{
    //    std::cin >> _a.age >> _a.height;
    //    std::cin >> _b.age >> _b.height;
    //}

    //void Output(Person & _a, Person & _b)
    //{
    //    std::cout << (_a.age + _b.age) / 2;
    //    std::cout << (_a.height + _b.height) / 2;
    //}

#pragma endregion

#pragma region POINTER ARRAY
    //int numbers[5];
    //int* p = nullptr;
    //
    //p = numbers; //&numbers[0]
    //p++;
    //*p = 20;
    //
    //p = &numbers[2];
    //*p = 30;
    //
    //p = numbers + 3;
    //*p = 40;

    //p = numbers;
    //*(p + 4) = 50;

    //numbers[0] = 100;
    //std::cout << *p + 4;

    /*for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << ", ";
    }*/

#pragma endregion

#pragma region DOUBLE POINTER

    //int num = 100;
    //int* pNum = &num;
    //int** ppNum = &pNum;
    //*(*(ppNum)) = 200;

#pragma endregion

#pragma region 2DARRAY POINTER

    int arr2D[4][4] = 
    {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16},
    };

    int arr[5] = {};

    //arr[10] = 100;

    &arr[0]; arr;
    int* pArr = arr;

    pArr[4] = 10;

    // 배열 포인터
    int (*pArr2D)[4] = arr2D;

  

    //void func(int(*pArr2D)[4])
    //{
    //    pArr2D[2][3] = 200;
    //}
    //
    //func(arr2D);
    pArr2D[0][2];
    //pArr2D[14][3];

    // 포인터 배열
    int* pArrs[4] =
    {
        arr2D[0]
        , arr2D[1]
        , &arr2D[2][0]
        , &arr2D[3][0] 
    };

    //std:: cout << pArrs[0][1];

#pragma endregion

#pragma region REFERENCE

    int num = 200;
    //int num2 = 200;

    int* pNum;
    pNum = &num;
    //pNum = &num2;

    //참조 (레퍼런스)는 만듬과 동시에 초기화가
    //이루어져야한다.
    //포인터의 *(역참조)연산을 생략해준다
    //사용하기가 편하고
    //코드 가독성도 훨씬 높겠죠
    int& num2 = num;

    num = 300;
    *(pNum) = 500;

    num2 = 300;



#pragma endregion

#pragma region FUNC_POINTER

    int (*minus)(int, int) = subtraciton;

    int ret = minus(10, 20);

    void (*print)() = printData;

    int m = 0;
    int n = 0;

    m = operation(7, 5, subtraciton);
    n = operation(7, 5, addition);

    // Event 방식 호출

    // 

#pragma endregion


    return 0;
}

