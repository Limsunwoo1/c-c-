#include <iostream>

int main()
{
	// 초기값; 조건식; 증감식 이루어져있고
	// 일정 범위를 내가 반복할때 자주 사용된다.
	int x = 0;
	for (x = 1; x < 10; x++)
	{
		//break  문 가장 가까운 반복문을 빠져나간다
		//if (x == 3)
		//{
		//	break;
		//}

		// continue 특정 조건에 스킵을 하고 싶다
		//if (x == 3)
		//{
		//	continue;
		//}

		std::cout << x;
	}

	// while(조건) 참일 경우에 
	// 해당 반복문을 실행한다.
	int y = 1;
	while (y < 10)
	{
		std::cout << "Hello World!\n";
		y++;
	}

	//최초 한번은 실행후 조건판단을 진행하여
	//반복문 실행한다.
	y = 20;
	do
	{
		std::cout << "Hello World!\n";
	} while (y > 10);


	for (int i = 0; i < 10; i++)
	{

	}




	return 0;
}

