
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y, r, s;
	cout << "введите значение X: ";
	cin >> x;
	cout << "введите значение Y: ";
	cin >> y;
	r = ((sqrt(x * y)) / abs(cos(x)));
	s = (2 * acos(0.0)) * (log(x) / log(5));
	cout << "Переменная R равна " << r << "\n";
	cout << "Переменаая S равна " << s << "\n";
	float c = max(r, s);
	cout << "Переменная c  равна " << c << "\n";
	system("pause");
	return 0;

}
