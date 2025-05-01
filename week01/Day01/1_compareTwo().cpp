#include <iostream>
using namespace std;

void compareTwo(int, int);

int main() {
    int a, b;
    cout << "Enter the integer of a and b :" << endl;
    cin >> a >> b;

    compareTwo(a, b);
    return 0;
}

void compareTwo(int a, int b) {
    if (a > b)
        cout << a << " is greater" << endl;
    else if (a < b)
        cout << b << " is greater" << endl;
    else
        cout << "A and B are equal" << endl;
}

