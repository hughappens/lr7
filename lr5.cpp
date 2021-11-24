/*#include<iostream>
#include<math.h>
#include<windows.h>
#define _USE_MATH_DEFINES
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, a, b, c;
	double y;
	bool f = true;
	cin >> a >> b >> x >> c;
	if ((x < 0) && (b != 0))
		y = a * (x * x) + (b * b) * x;
	else if ((c > 0) && (b = 0))
		y = x + a * x + c;
	else if (c != 0)
		y = x / c;
	else f = false;
	if (f) cout << y;
	else cout << "error";
}
*/
#include<iostream>
#include<windows.h>
#include<math.h>
#define _use_math_defines
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);//commit
	 
	int x;
	cout << "Введіть номер дня x:";
	cin >> x;
	switch (x)
	{
	case 1: cout << "Понеділок 3 пари"; break;
	case 2: cout << "Вівторок 2 пари"; break;
	case 3: cout << "Середа 3 пари"; break;
	case 4: cout << "Чертверг 4 пари"; break;
	case 5: cout << "П'ятниця 3 пари"; break;
	default: cout << "Не існує"; break;
	}
}

