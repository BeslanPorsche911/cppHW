
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a;
	short b;
	cout << "время вашего разговора(минут) ? ";
	cin >> a;
	if (a >= 0) 
		cout << "Ваш мобильный оператор: 1,2,3\n";
		cin >> b;
		switch (b) {
		case 1:
			cout << "сумма вашего разговора вышел " <<  a * 2 << " долларов";
			break;
		case 2:
			cout << "сумма вашего разговора вышел " <<  a *  2.7 << " долларов";
			break;
		case 3:
			cout << "сумма вашего разговора вышел " <<  a * 3 << " долларов";
			break;
		default:
			cout << "Введенные данные некорректны";
		}

	

	

	

	
	
	
}

