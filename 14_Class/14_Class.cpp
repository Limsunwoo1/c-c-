// 14_Class.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
//#include <stdio.h>


struct Vector2
{
    float x;
    float y;

    Vector2() = default;

    Vector2(const Vector2&) = default;
    Vector2& operator=(const Vector2&) = default;

    Vector2(Vector2&&) = default;
    Vector2& operator=(Vector2&&) = default;

    constexpr Vector2(float _x, float _y) noexcept : x(_x), y(_y) {}
    explicit Vector2(_In_reads_(2) const float* pArray)  noexcept : x(pArray[0]), y(pArray[1]) {}
};

//// 템플릿 클래스
//template <typename T>
//struct Vector2
//{
//    T x;
//    T y;
//
//    Vector2() = default;
//
//    Vector2(const Vector2&) = default;
//    Vector2& operator=(const Vector2&) = default;
//
//    Vector2(Vector2&&) = default;
//    Vector2& operator=(Vector2&&) = default;
//
//    constexpr Vector2(T _x, T _y) noexcept : x(_x), y(_y) {}
//    explicit Vector2(_In_reads_(2) const float* pArray)  noexcept : x(pArray[0]), y(pArray[1]) {}
//};
//
////템플릿 클래스 특수화
//template <>
//struct Vector2<float>
//{
//    float x;
//    float y;
//
//    Vector2() = default;
//
//    Vector2(const Vector2&) = default;
//    Vector2& operator=(const Vector2&) = default;
//
//    Vector2(Vector2&&) = default;
//    Vector2& operator=(Vector2&&) = default;
//
//    constexpr Vector2(float _x, float _y) noexcept : x(_x), y(_y) {}
//    explicit Vector2(_In_reads_(2) const float* pArray)  noexcept : x(pArray[0]), y(pArray[1]) {}
//};

//struct Node
//{
//    int data;
//    Node* next;
//    Node* prev;
//
//    Node()
//    {
//
//    }
//
//    ~Node()
//    {
//
//    }
//};


//void inputData(Node* this, int data)
//{
//    this->data = data;
//}

class Node
{
public:
    // 디폴트 생성자
    Node()
        : data(0)
        , next(nullptr)
        , prev(nullptr)
    {
        
    }

    Node(int data)
        : data(data)
        , next(nullptr)
        , prev(nullptr)
    {

    }

    Node(const Node& other)
    {
        //data = other.data;

        //next = nullptr;
        //prev = nullptr;
    }

    // 소멸자 객체가 메모리에서 해제될때
    // 호출되는 함수
    ~Node()
    {
        data = 0;
        next = nullptr;
        prev = nullptr;
    }
    
    //디폴트 생성자를 사용하겠다는 선언
    //Node() = default;
    //~Node() = default;

    void inputData(const int _data) 
    {
        this;
        /*this->*/data = _data;

        //Node* _this = nullptr;
        //_this = (Node*)0xf1234;

        //int num = (int)'A';
        //int num = static_cast<int>('A');
    }

    void PrintData() const
    {
        std::cout << data;
    }

    //접근제한 지정자
private:
    int data; 
    Node* next;
    Node* prev;
};

class Warrior
{
public:
    Warrior(const char* str)
    {
        int len = strlen(str);
        name = new char[len + 1];
        strcpy(name, str);
    }

    ~Warrior()
    {
        delete[] name;
    }

    Warrior(const Warrior& other)
    {
        //name = other.name;
        level = other.level;

        int len = strlen(other.name);
        name = new char[len + 1];
        strcpy(name, other.name);
    }


private:
    char* name;
    int level;
};




//void inputData(Node* node, int data) 
//{
//    node->data = data;
//}

int main()
{
    ////주소 변경 하지 못하는 포인터 콘스트
    //int* const p = &a;

    //// 값을 변경하지 못하는 콘스트 포인터
    //const int* p = &a;

    //// 주소도 값도 둘다 변경하는 콘스트 포인터 콘스트
    //const int* const p = &a;

    //p = &b;
    //*p = 200;
    //Node node;
    //node.data = 0;
    //inputData(&node, 10);
    
    Node cNode;
    cNode.inputData(10);


    //복사생성자
    //Node bNode(cNode);
    Node bNode(cNode);

    //while (true)
    //{
    //    // 조작
    //    Node* dNode = new Node();

    //    // 렌더링
    //    

    //    // 데이터 송신
    //    delete dNode;
    //}
    
    //(*dNode).inputData(10);
    //dNode->inputData(20);

    //Vector2 vec;
    //vec.x = 20;
    //vec.y = 20;

    //Warrior waarior1;
    //Warrior warrior2(waarior1);
    
    Warrior minho ("Minho");

    Warrior* chulsu = new Warrior(minho);
    delete chulsu;



    return 0;
}

