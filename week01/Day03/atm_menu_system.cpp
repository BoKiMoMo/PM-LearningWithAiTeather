#include <iostream>
using namespace std;

int main() {
    int balance = 1000; // 初始餘額
    int choice=0;//選擇
    int amount=0;//金額

    while (true) {
        // 顯示選單
        cout << "\n請選擇功能：\n";
        cout << "1. 查詢餘額\n2. 存款\n3. 提款\n4. 離開\n";
        cin >> choice;

        switch (choice) {
        case 1:
            // 顯示餘額
            cout <<"餘額為 : " << balance <<" 元 。" << endl;
            break;
        case 2:
            // 存款
            cout << "請輸入存款金額 : " << endl;
            cin >> amount;
            if(amount>0)
                balance += amount;
            else
                cout << "存款金額無效，請重新輸入！" << endl;
            break;
        case 3:
            // 提款
            cout << "請輸入提款金額 : " << endl;
            cin >> amount;
            if (balance < amount)
                cout << "餘額不足，請重新選擇服務" << endl;
            else if(amount<=0)
                cout << "提款金額無效，請重新輸入！" << endl;
            else
                 balance -= amount;
            break;
        case 4:
            // 離開程式
            cout << "感謝使用本系統，掰掰！" << endl;
            return 0;
        default:
            // 錯誤輸入提示
            cout << "請輸入合法數字" << endl;
            break;
        }
    }

    return 0;
}
