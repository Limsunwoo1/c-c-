#include <iostream>
#include <string>


// class unit
//{
    
//}

class Vector2
{
public:
    int x;
    int y;

public:
    Vector2& operator++()
    {
        x += 1;
        y += 1;

        return *this;
    }

    Vector2 operator++(int)
    {
        Vector2 ret;
        ret.x = x;
        ret.y = y;
        
        x += 1;
        y += 1;

        return ret;
    }

    Vector2 operator+(Vector2 other)
    {
        Vector2 ret;
        ret++;

        ret.x = x + other.x;
        ret.y = y + other.y;

        return ret;
    }

    bool operator==(Vector2 other)
    {
        if (x != other.x)
            return false;

        if (y != other.y)
            return false;

        return true;
    }
};

class MyString
{
public:
    char str[256];

    void InputString(const char* input)
    {
        strcpy_s(str, input);
    }

public:
    void operator +=(const char* other)
    {
        strcat_s(str, other);
    }
};


int main()
{
    Vector2 v1 = { 0, 0 };
    Vector2 v2 = { 5, 5 };
    
    ++v1;

    v1++;
    /*std::cout << v1;*/

    int x = v1.x + v2.x;
    int y = v1.y + v2.y;

    //Vector2 operator +(Vector2 other)
    //{
    //    Vector2 ret;
    //    ret.x = x + other.x;
    //    ret.y = y + other.y;

    //    return ret;
    //}

    Vector2 v3 = v1 + v2;

    std::cout << x << y;
    
    MyString str1;
    str1.InputString("Hello");

    str1 += " World";

    //MyString str2;
    //str1.InputString("World");

    //strcat();

    std::string str = "Hello ";
    str += "World";

    //if (v1.x && v2.x && v1.y && v2.y)
    //{

    //}

    if (v1 == v2)
    {

    }

    return 0;
}

