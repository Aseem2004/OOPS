#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    float salary;

public:
    //non-parameterized constructor
    Teacher(){
        dept="CS";
    }

    // parameterized constructor
    Teacher(string n, string d, float sal){
        name=n;
        dept=d;
        salary=sal;
    }

    //this operator
    // Teacher(string name, string dept, float salary){
    //     this->name=name;
    //     this->dept=dept;
    //     this->salary=salary;
    // }
    
    //copy constructor (pass by reference)
    Teacher(Teacher &obj){
        this->name=obj.name;
        this->dept=obj.dept;
        this->salary=obj.salary;
    }

    string name;
    string dept;

    void GetInfo(){
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<salary<<endl;
    }
};

int main(){
    Teacher t1;
    cout<<t1.dept<<endl;

    Teacher t2("Aseem","CS",1000);
    t2.GetInfo();
    
    Teacher t3(t2);
    t3.GetInfo();

}

//Output is:
//CS -->t1
//Aseem -->t2
//CS
//1000
//Aseem -->t3
//CS
/1000
