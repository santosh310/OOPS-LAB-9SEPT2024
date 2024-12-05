#include<iostream>
#include<string>
using namespace std;
class Marks {
    private:
    int sno;
    float percentage;
    public:
    Marks() { sno = 0; percentage = 0.0; }
    Marks(int r, float p) { sno = r; percentage = p; }
    void print() {
        cout << "Roll No: " << sno << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
class Student {
    private:
    string name;
    Marks marks;
    public:
    Student() { name = " "; }
    Student(string s, Marks m) { name = s; marks = m; }
    void setName(string s) { name = s; }
    void getResult() {
        cout << "Student Name: " << name << endl;
        marks.print();
    }
};
int main() {
    Student st[5];
    Marks mk[5] = {Marks(190, 80), Marks(191, 70.5),
                   Marks(192, 90), Marks(193, 75),
                   Marks(194, 85.5)};
    for(int i = 0; i < 5; i++) {
        st[i].setName("Student" + to_string(i + 1));
        st[i].getResult();
    }     
    return 0;          
}