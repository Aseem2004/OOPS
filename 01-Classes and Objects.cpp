#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    float salary;

public:
    string name;
    string dept;

    void ChangeDept(string NewDept){
        dept=NewDept;
    }

    void SetSalary(float s){
        salary=s;
    }

    float GetSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;

    t1.name="Aseem";
    t1.dept="CS";
    t1.SetSalary(10000);
    cout<<t1.name<<endl;
    cout<<t1.GetSalary();
}

