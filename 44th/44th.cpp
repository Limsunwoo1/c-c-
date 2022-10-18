//전처리기
#include <iostream>
#include "test.h"




//전역변수 프로그램 시작과 동시에 할당
//프로그램이 종료되기전까지는 사라지지 않습니다.

int gData = 200;
const float PI = 3.141592f;


int main()
{
    //이름바꾸기 ctrl + R R
    int hp = 0; //초기화
    hp = 300; //대입


    hp = hp - 10;
    //[0][1][1][0][0][1]


    // 오버워치 처음 나왔을때 
    // 자기 공식전 점수를 


    // ctrl + m m
    // 이미 예약되어있는 키워드는 식별자(이름)이 될수가 없습니다.
    // 대문자와 소문자는 서로 구분이된다.
    // 이름은 대소문자 , 숫자, 및 문자로만 구성될수 있다.
    // 대소문자 함게 _(특수문자)는 이름으로 사용할수 있다.

    // 문자 유형
    // literal
    char ch = 'A';

    // 부동 소수점 유형
    // 정수 실수 ( 소수 표현 )

    // 변수 X 상수 O
    // lvalue = //rvalue
    //const float PI = 3.141592f;
    //PI = 1.52f;



    // true false 
    bool b = true /*0*/;
    b = false;

    // 좋은 코드

    // 과도한 주석 가독성 해치기도한다.
    
    // 프로그래밍 잘한다 

    // 3가지 분류

    //1. 디버깅 60 + 자료구조 + 알고리즘 
    // 직접만드는게 작업속도 ->

    //2. 문자열 20
     
    //3. 파일입출력 20

    // 수학, 3d 이론, 네트워크 
    //// 라이브러리, API 
    //unsigned long long number = 98767565451626738;
    //
    ////데이터 타입 자동 유추
    //auto num = 98767565451626738;

    ////데이터 타입 추론
    //decltype(num) number;
    

    //for (size_t i = 0; i < length; i++)
    //{
    //    gData = 0;
    //}

    ////i = 200;

    //{
    //    gData = 0;
    //}

    //{
    //    gData = 200;
    //}


    char ch2 = 'B';

    // 멀티 바이트 : 1바이트랑 2바이트 혼용되서
    char str[256] = "abc한글";
    std::cout << str;

    wchar_t wc = L'■';
    wchar_t wc2 = L'□';

    if (ch2 >= 'A' && ch2 <= 'Z')
    {

    }
    else if (ch2 >= 'a' && ch2 <= 'z')
    {

    }


    return 0; //프로그램 종료가됩니다.
}

