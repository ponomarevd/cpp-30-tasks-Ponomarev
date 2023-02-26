#include <iostream>
#include "MathEx.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	MathEx mathex;
	cout << "Введите задание: ";
	int num;
	double a, b, c;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.R(a,b) << endl;
		break;
	case 2:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.K(a, b) << endl;
		break;
	case 3:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.G(a, b) << endl;
		break;
	case 4:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.D(a, b) << endl;
		break;
	case 5:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.L(a, b) << endl;
		break;
	case 6:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.M(a, b) << endl;
		break;
	case 7:
		cout << "1 значение: " && cin >> a;
		cout << mathex.N(a) << endl;
		break;
	case 8:
		cout << "1 значение: " && cin >> a;
		cout << mathex.T(a) << endl;
		break;
	case 9:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.V(a, b) << endl;
		break;
	case 10:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.U(a, b, c) << endl;
		break;
	case 11:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.S(a, b) << endl;
		break;
	case 12:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.K1(a, b) << endl;
		break;
	case 13:
		cout << "1 значение: " && cin >> a;
		cout << mathex.E(a) << endl;
		break;
	case 14:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.M1(a, b) << endl;
		break;
	case 15:
		cout << "1 значение: " && cin >> a;
		cout << mathex.H(a) << endl;
		break;
	case 16:
		cout << "1 значение: " && cin >> a;
		cout << mathex.S1(a) << endl;
		break;
	case 17:
		cout << "1 значение: " && cin >> a;
		cout << mathex.N1(a) << endl;
		break;
	case 18:
		cout << "1 значение: " && cin >> a;
		cout << mathex.Z(a) << endl;
		break;
	case 19:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.N2(a, b, c) << endl;
		break;
	case 20:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.U1(a, b, c) << endl;
		break;
	case 21:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.P(a, b) << endl;
		break;
	case 22:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.T(a, b, c) << endl;
		break;
	case 23:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.P1(a, b) << endl;
		break;
	case 24:
		cout << "1 значение: " && cin >> a;
		cout << mathex.F(a) << endl;
		break;
	case 25:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.P2(a, b) << endl;
		break;
	case 26:
		cout << "1 значение: " && cin >> a;
		cout << mathex.Z1(a) << endl;
		break;
	case 27:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.W(a, b, c) << endl;
		break;
	case 28:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.T1(a, b) << endl;
		break;
	case 29:
		cout << "1 значение: " && cin >> a;
		cout << mathex.N3(a) << endl;
		break;
	case 30:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.W1(a, b) << endl;
		break;
	default:
		break;
	}
}

