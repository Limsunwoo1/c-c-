#include "Player.h"
#include "Monster.h"



void Player::PrintLevel()
{
	std::cout << status.level;
}

void Player::Attack(Monster* monster)
{
	monster->SetHp(90);
}