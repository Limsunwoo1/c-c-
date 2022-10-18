// 08_String.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

char str[10] = "hello";

int myStrLen()
{
    int len = 0;
    for (size_t i = 0; i < 6; i++)
    {
        if (str[i] == '\0')
        {
            len = i;
            break;
            /*return len;*/
        }
    }

    return len;
}

int main()
{
    //std::cout << "hello";
    char ch = 'A';
    
    //int arr[10];
    //char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    std::cout << str;
    int len = myStrLen();

    int len2 = strlen(str);

    // 기초 2주정도만 

    char strA[256] = "Hello";
    char strB[256] = "World";

    strcat_s(strA, strB);

    //길이를 구해주는 라이브러리
    int len = strlen(strA);


    // 문자열 복사해주는 함수
    //strcpy_s(strB, strA);
    int cmp = strcmp(strB, strA);
    if (strcmp(strB, strA) == 0)
    {

    }

    std::string str = "Hell0";
    str.size();

    str += "World";

    return 0;
}
