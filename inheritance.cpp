#include <iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
        cout<<"enter name:";
        cin>>name;
    }
    void display(){
        cout<<name<<endl;
    }
    
};
class Sports{
   int m=50;
   public:
   void display(){
       cout<<m<<endl;
   }
};

class Student:public Person, public Sports{
    public:
    void display(){
        Person::display();
        Sports::display();
    }
    
};
int main() {
    // Write C++ code here
    Student s1;
    s1.read();
    s1.display();   // child

    return 0;
}

//OUTPUT
enter name:santosh kumar
santosh
50
=== Code Execution Successful ===
