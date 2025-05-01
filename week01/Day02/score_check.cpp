#include <iostream>
#include <string>
using namespace std;


int main() {
	int a=0;
	
	//不斷要求使用者輸入成績，直到 a==-1 
	while(true)
	{
    cout<<"\n請輸入使用者的成績 :(輸入-1離開) "<<endl;
	cin>>a;
	
	//離開程式 
	if(a==-1){
		cout<<"程式結束，謝謝使用!"<<endl; 
		break;		
	}
	
	//檢查成績是否合法 
	if (a > 100 || a < 0) {
    cout << "無效成績，請重新輸入。\n\n" << endl;
    continue;
}

	//分級 
	if(a>=90)
		cout<<"優等"<<endl;
	else if(a>=80)
		cout<<"甲等"<<endl; 
	else if(a>=70)
		cout<<"乙等"<<endl; 
	else if(a>=60)
		cout<<"丙等"<<endl; 
	else 
		cout<<"不及格"<<endl;
	}
  		
			 
    return 0;
}
