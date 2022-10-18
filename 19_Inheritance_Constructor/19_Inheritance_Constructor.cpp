#include <iostream>
using namespace std;


class Polygon 
{
protected:
    int width, height;
    
public:
    void set_values(int a, int b)
    {
        width = a; height = b;
    }

    virtual int area() 
    {
        return 0;
    };
    virtual int area2()
    {
        return 0;
    };

public:
    Polygon()
    {

    }

    virtual ~Polygon()
    {

    }
};


class Rectangle : public Polygon
{
public:
    int mArea;
    virtual int area() override
    {
        return width * height;
    }

public:
    Rectangle()
    {

    }

    ~Rectangle()
    {

    }
};

//int area(Rectangle* tri)
//{
//    return width * height;
//}
//
//int area(Triangle* tri)
//{
//    return width * height / 2;
//}

class Triangle : public Polygon 
{
public:
    int mArea;
    virtual int area() override
    {
        return width * height / 2;
    }

public:
    Triangle()
    {

    }

    ~Triangle()
    {
        
    }
};

int main() 
{
    //Rectangle rect;
    Rectangle rect;


    Polygon* polygon = new Rectangle();

    //polygon->set_values();
    Triangle trgl;

    //rect.set_values(4, 5);
    //trgl.set_values(4, 5);

    //cout << rect.area() << '\n';
    //cout << trgl.area() << '\n';

    Polygon* polygons[2] = { &rect, &trgl };

    for (size_t i = 0; i < 2; i++)
    {
        //(polygons)->set_values(10, 20);
        polygons[i]->area();
    }

    trgl.area();
    rect.area();

    //Polygon* polygon = new Rectangle();

    //sizeof(pp);
    ////pp->area();

    //delete polygon;
    delete polygon;

    return 0;
}
