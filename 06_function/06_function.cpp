
#include <iostream>
using namespace std;
//함수 : 코드의 묶음

//간단하게 설명하면 이름 바꾸기
//자료형 재정의
typedef unsigned int SIZE;

//이름공간
namespace tam
{
	int pos;
}
namespace yam
{
	int pos;
}

//반환값 함수 이름(전달인자)

void PrintNumber();
// 함수 오버로딩
// 같은 이름의 함수도 전달인자의 종류에따라서
// 선언할수있도록 가능하게 해주는 기능
void PrintNumber(int num/*, int num2, int num3*/)
{
	for (SIZE i = 0; i < 10; i++)
	{
		cout << num + i;
	}
	return;
}

// 얕은복사 call by value
// 깊은복사 call by reference

int add(int _a, int _b)
{
	//4바이트 더 사용하죠
	int result = _a + _b;
	return result;

	//지역변수는 해당 지역을 빠져나오면서
	//메모리에서 해제된다.
}

//int add(int _a, int _b)
//{
//	return _a + _b;
//}

//f11 함수 안으로 진입 하는 디버깅 단축키
template <typename T>
T add(T a, T b)
{
	return a + b;
}

//템플릿 특수화 
template <>
float add(float a, float b)
{
	return (int)(a + b);
}

//int add(int a, int b)
//{
//	return a + b;
//}
//
//float add(float a, float b)
//{
//	return a + b;
//}
//
//char add(char a, char b)
//{
//	return a + b;
//}


int main()
{
	////PrintNumber();
	//PrintNumber(10);
	////tam::pos = 100;
	////yam::pos = 100;

	//int num1 = 22;
	//int num2 = 11;

	//int res = add(10, 5);
	//res = add(num1, num2);


	char ch = static_cast<char>(3);


	add(3, 5);

	float ret = add<float>(0.3f, 0.9f);
	int ret2 = add<int>(5, 9);

    return 0;
}

void PrintNumber()
{
	for (SIZE i = 0; i < 10; i++)
	{
		cout << i;
	}
}