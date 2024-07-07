#include <iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
};

class Student: public Person{
public:
    int rollno;

    Student(string name,int age,int rollno): Person(name,age){
        this->rollno=rollno;
    }

    void GetInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }
};

int main(){
    Student s1("A",20,24);
    s1.GetInfo();
}