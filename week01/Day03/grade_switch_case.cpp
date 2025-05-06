#include <iostream>
#include <string>
using namespace std;


int main() {
	int score = 0;

	//不斷要求使用者輸入成績，直到 score==-1 
	while (true)
	{
		//公告等級分類表
		cout << "請輸入使用者的成績區間1~5 :(輸入-1離開) " << endl;
		cout << "1 ➔ 優等" << endl;
		cout << "2 ➔ 甲等" << endl;
		cout << "3 ➔ 乙等" << endl;
		cout << "4 ➔ 丙等" << endl;
		cout << "5 ➔ 不及格" << endl;

		//成績輸入
		cin >> score;

		//離開程式 
		if (score == -1) {
			cout << "程式結束，謝謝使用!" << endl;
			break;
		}

		//檢查成績等級是否合法 
		if (score <1  || score > 5) {
			cout << "無效成績，請重新輸入。\n\n" << endl;
			continue;
		}

		//分級
		switch (score)
		{
			case 1:
				cout << "優等" << endl;
				break;
			case 2:
				cout << "甲等" << endl;
				break;
			case 3:
				cout << "乙等" << endl;
				break;
			case 4:
				cout << "丙等" << endl;
				break;
			case 5:
				cout << "不及格" << endl;
				break;
			default:
				cout << "無此等級" << endl;
				break;
		}

	}
		return 0;
}
