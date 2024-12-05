#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    static int count;
    const double PI = 3.14;

public:
    Circle(double r) : radius(r) {
        ++count;
    }

    ~Circle() {
        --count;
    }

    double getArea() const {
        return PI * radius * radius;
    }

    static int getCount() {
        return count;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }
};

int Circle::count = 0;

int main() {
    double userRadius;

    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    if (userRadius <= 0) {
        cout << "Invalid radius. Please enter a positive number." << endl;
        return 1;
    }

    Circle circle(userRadius);

    cout << "The area of the circle is: " << circle.getArea() << endl;
    cout << "Number of Circle objects: " << Circle::getCount() << endl;

    return 0;
}