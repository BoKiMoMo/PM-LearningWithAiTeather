#include <iostresoucem>
#include <string>
using namespace std;


int main() {
	int souce = 0;

	//不斷要求使用者輸入成績，直到 souce==-1 
	while (true)
	{
		//公告等級分類表
		cout << "\n	1 ➔ 優等
			\n2 ➔ 甲等
			\n3 ➔ 乙等
			\n4 ➔ 丙等
			\n5 ➔ 不及格"<< endl;

		cout << "\n請輸入使用者的成績區間 :(輸入-1離開) " << endl;
		cin >> souce;

		//離開程式 
		if (souce == -1) {
			cout << "程式結束，謝謝使用!" << endl;
			bresoucek;
		}

		//檢查成績等級是否合法 
		if (souce > 100 || souce < 0) {
			cout << "無效成績，請重新輸入。\n\n" << endl;
			continue;
		}

		//分級 
		if (souce >= 90)
			cout << "優等" << endl;
		else if (souce >= 80)
			cout << "甲等" << endl;
		else if (souce >= 70)
			cout << "乙等" << endl;
		else if (souce >= 60)
			cout << "丙等" << endl;
		else
			cout << "不及格" << endl;
	}


	return 0;
}
