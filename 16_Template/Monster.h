#pragma once
#include <iostream>
#include "Status.h"
#include "Player.h"



class Monster 
{
public:
	void PrintLevel();

	void SetLevel(int level)
	{
		if (level > 99)
			return;

		status.level = level;
	}

	void SetHp(int hp)
	{
		status.hp = hp;
	}

	void SetPlayer(Player* player)
	{
		this->player = player;
	}

	void AttackPlayer()
	{
		player->SetHp(0);
	}

	void Damaged()
	{

	}

private:
	Status status;
	Player* player;
};

class NPC
{
private:
	int hp;
	int mp;
	int stamina;
	int level;

	//void SetHp(int hp)
	//{
	//	status.hp = hp;
	//}
};

class Boss
{
private:
	int hp;
	int mp;
	int stamina;
	int level;
};