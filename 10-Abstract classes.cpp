#include <iostream>
#include<string>
using namespace std;

class Shape{ //abstract class
public:

    virtual void draw()=0;
};

class Circle: public Shape{
public:

    void draw(){
        cout<<"drawing a circle";
    }
};

int main(){
    Circle c1;
    c1.draw();
}

//Output:
// drawing a circle
