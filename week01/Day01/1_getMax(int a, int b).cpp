#include <iostream>
using namespace std;

int getMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int result = getMax(a, b);
    cout << "The greater number is: " << result << endl;

    return 0;
}

