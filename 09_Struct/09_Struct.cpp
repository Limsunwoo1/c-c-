//구조체
#include <iostream>

//사용자 정의 자료형
//클래스

struct Pos
{
    int y;
    int x;
};

struct Player
{
    //char Class[256];
    int hp;
    int mp;
    Pos pos;
};


int main()
{
    //int playerHpArr[10];
    //int playerMpArr[10];
    //int playerAttArr[10];
    //Player players[10];
    int arr[256] = {};
    Player warrior = {};
    warrior.hp = 100;
    warrior.mp = 100;

    warrior.pos.y = 5;
    warrior.pos.x = 5;


    std::cout << "플레이어의 y좌표는 : " << warrior.pos.y << "\n";

    return 0;
}

