// Day22 - C++ 練習範例

#include <iostream>
using namespace std;

class Car {
public:
    string brand;   // 屬性 / Attribute
    int year;       // 屬性 / Attribute

    void honk() {   // 方法 / Method
        cout << brand << " says: Beep! Beep!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2022;

    cout << "Brand: " << myCar.brand << ", Year: " << myCar.year << endl;
    myCar.honk();
    return 0;
}