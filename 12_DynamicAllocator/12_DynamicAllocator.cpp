// 12_DynamicAllocator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

struct Person
{
    int age;
    int height;
    char* name;
};

//static int g = 0;
//int g2 = 0;

void DynamicAlloc_Person(Person* person, int nameLen, const char* name)
{

    // malloc 보편적인 c언어에서의 동적할당 방법
    person->name = new char[nameLen];
    //person->name = (char*)malloc(sizeof(char) * nameLen);
    memset(person->name, 0, sizeof(char) * nameLen);

    // calloc 할당과 동시에 메모리 초기화 (0)으로만 자동으로해준다.
    //person->name = (char*)calloc(nameLen, sizeof(char));


    // realloc 메모리 재할당
    //free(person->name);
    //person->name = (char*)calloc(nameLen, sizeof(char));
    //realloc(person->name, sizeof(char) * nameLen);

    memcpy(person->name, name, sizeof(char) * nameLen);
    //strcpy(person->name, name);
    /*for (size_t i = 0; i < person->name.size(); i++)
    {
        person->name[i] = name[i];
    }*/
}
void Delete_Person(Person* person)
{
    //free(person->name);
    delete[] person->name;
}

void Drink(Person& person)
{
    person.height += 10;
}

int main()
{
    //동적할당의 필요성
    // 사용자가 얼만큼 크기의 메모리가 필요한 데이터를 사용할지 
    // 알수없다. 

    // 스택의 크기는 정해져있다. 비쥬얼스튜디오 옵션창에서 크기를 변경해줄수 있다.
    // 10메가바이트 100 메가바이트
    // 스택 (지역변수) . 데이터영역 (전역변수 ) 이친구들은 
    // 프로그램이 실행중일때 메로리가 할당되는게 아니라
    
    // 프로그램 동작중에 메모리의 크기를 지정해주고
    // 사용할수있는 메모리 할당이 필요하다.
    // 그런애들을 동적할당이고 한다.

    
    int arr[124];

    //malloc
    int i = 0;

    // = + / *
    int size = sizeof(int);
    int size2 = sizeof(char);

    //바이트 패딩
    int size3 = sizeof(Person);

    char* p1 = (char*)malloc(sizeof(char));
    int* p2 = (int*)malloc(sizeof(int));
    Person* p3 = (Person*)malloc(sizeof(Person));

    free(p3);
    free(p2);
    free(p1);

    // 해제는 조립의 역순
    Person* a = (Person*)malloc(sizeof(Person));
    DynamicAlloc_Person(a, 10, "LJJ");
    Delete_Person(a);
    free(a);

    // c스타일의 불편한 점을 메모리 할당방식을 
    // 대체할 c++ new 연산자
    int* p5 = new int;
    Person* a6 = new Person();

    delete p5;
    delete a6;

    int arrSize = 0;
    std::cin >> arrSize;
    int* pArr = new int[arrSize];
    
    // nullptr - NULL
    delete[] pArr;

    //dynamic array
    //linked list

    return 0;
}

