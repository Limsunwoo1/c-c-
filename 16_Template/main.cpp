// 16_Template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "Player.h"
#include "Monster.h"


int main()
{
    Player player;
    player.SetLevel(10);
    player.PrintLevel();

    Monster monster;
    monster.SetLevel(10);
    monster.SetPlayer(&player);

    monster.AttackPlayer();
    player.Attack(&monster);

    return 0;
}

