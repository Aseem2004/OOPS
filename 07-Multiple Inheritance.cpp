#include <iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    int salary;
};

class TA: public Student, public Teacher{

};

int main(){
    TA t1;
    t1.name="A";

    cout<<t1.name;
}