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
    
    Student(Student &obj){
        this->name=obj.name;
        cgpaptr=new float;
        *cgpaptr=*obj.cgpaptr; //creating a diff pointer for diff objects allocated dynamically
    }
    
    void GetInfo(){
        cout<<name<<endl;
        cout<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("A",5.9);
    Student s2(s1);
    
    s1.GetInfo();
    *(s2.cgpaptr)=9.6;
    s1.GetInfo();
    s2.GetInfo();
}

//Output:
//A
//5.9
// A
// 5.9
// A
// 9.6
