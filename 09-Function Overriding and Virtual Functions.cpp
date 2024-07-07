#include <iostream>
#include<string>
using namespace std;

class Parent{
public:

    void GetInfo(){
        cout<<"parent"<<endl;
    }

    virtual void hello(){
        cout<<"hello from parent"<<endl;
    }
};

class Child: public Parent{
public:

    void GetInfo(){
        cout<<"child"<<endl;
    }

    void hello(){
        cout<<"hello from child"<<endl;
    }
};

int main(){
    Child c1;
    c1.GetInfo();
    c1.hello();
}

//Output:
// child
// hello from child
