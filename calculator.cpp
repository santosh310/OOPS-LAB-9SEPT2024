#include <iostream>
using namespace std;

class Calculator {
private:
    int num1;
    int num2;

public:
    void getNum(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void add() {
        cout << num1 + num2 << endl;
    }

    void sub() {
        cout << num1 - num2 << endl;
    }
};

int main() {
    Calculator obj1;
    obj1.getNum(5, 6);
    obj1.add();
    obj1.sub();
    return 0;
}