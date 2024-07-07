#include <iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    float *cgpaptr;

    Student(string name, float cgpa){
        this->name=name;
        cgpaptr=new float;
        *cgpaptr=cgpa;
    }

    ~Student(){
        cout<<"Destructor";
        delete cgpaptr;
    }
    
    void GetInfo(){
        cout<<name<<endl;
        cout<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("A",5.9);
    s1.GetInfo();
}