#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "块计";
    cin >> n;
    cin.ignore(); // 睲埃传︽才

    string participants[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        getline(cin, participants[i]);
    }

    cout << "\n穦某把籔" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << participants[i] << endl;
    }
    return 0;
}


