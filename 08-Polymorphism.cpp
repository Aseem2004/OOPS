#include <iostream>
#include<string>
using namespace std;

class PrintValues{
public:

    void print(int x){
        cout<<"Integer "<<x;
    }

    void print(char x){
        cout<<"Character "<<x;
    }
};

int main(){
    PrintValues t1;
    t1.print(3);
    cout<<endl;
    t1.print('a');
}

//Output:
// Integer 3
// Character a