#include <iostream>

// 상속
// 부모클래스의 멤버 변수와
// 멤버함수를 자식클래스에서 사용가능하게 해주는것 (메뫃리 할당)

GameObject gObject;

class Object
{

};

class ReswpanManager : public Object
{

};

class GameObject : public Object
{
public:
    int hp;
    int mp;
    int att;
    int def;

    void Attack()
    {
        //api d2d d3d
    }
};

class NetWork
{
    friend class NoSpawnMonster;

public:
    void SetIp(int ip)
    {
        ip = ip;
    }

private:
    int ip;
    int port;
};

class NoSpawnMonster : public GameObject
{
    

public:
    void test(NetWork net)
    {
        net.ip = 200;

    }
};

//다중상속도 가능하다
class EventMonster : public GameObject, public NetWork
{

};

class Monster : public GameObject
{
private:
    int spwanTime;
};

class BossMonster : public Monster
{
public:
    int skillCoolTime;

    void Attack()
    {
        //spwanTime = 10;
        gObject;
    }
};

class NoSpawnBossMonster : public NoSpawnMonster
{
public:
    int skillCoolTime;

    void Attack()
    {
        //spwanTime = 10;
        gObject;
    }
};


class Warrior : public GameObject
{
public:
    int level;
};

int main()
{
    Monster goblin;
    gObject;

    BossMonster vampire;
    vampire.mp = 100;

    NoSpawnBossMonster eventMonster;
    EventMonster eventMon;
    GameObject* mons[10] 
        ={ &goblin
        ,  &vampire 
        , &vampire
    , &eventMon };

    for (size_t i = 0; i < 3; i++)
    {
        mons[i]->hp = 0;
    }
    //eventMonster.
    //vampire.
    //vampire.
    //vampire.


   
    //eventMon.

    return 0;
}

