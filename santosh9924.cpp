#include<iostream>
using namespace std;

class sample{
    int m;
    void read(){
        cout<<"enter the value of m:";
        cin>>m;
    }
    public:
    void update();
    void write();
};

void sample::update(){
    read();
}
void sample::write(){
    cout<<"value of m:"<<m<<endl;
}

int main(){
    sample obj1;
    obj1.update();
    obj1.write();
    return 0;
}

/*=====================================
Output
======================================
enter the value of m:89
value of m:89
=====================================
*/