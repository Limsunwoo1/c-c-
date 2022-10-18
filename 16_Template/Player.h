#pragma once
#include <iostream>
#include "Status.h"
//#include "Monster.h"

// 전방선언
class Monster;
class Player
{
public:
	/*__forceinline*/ /*inline*/ void PrintLevel();
	
	void SetLevel(int level)
	{
		status.level = level;
	}

	void SetHp(int hp)
	{
		status.hp = hp;
		std::cout << "";
	}

	void Attack(Monster* monster);
	//{
	//	monster->SetHp(90);
	//}

private:
	Status status;
	Monster* monster;

	int hp;
	int mp;

};