#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "��J�H�ơG";
    cin >> n;
    cin.ignore(); // �M�������

    string participants[n];
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        getline(cin, participants[i]);
    }

    cout << "\n�|ĳ�ѻP�̡G" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << participants[i] << endl;
    }
    return 0;
}


