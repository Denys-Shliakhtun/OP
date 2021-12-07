#include <iostream>
using namespace std;

int input(char);	//введення числа
int gcd(int, int);	//знаходження НСД двох чисел

int main()
{
	int n = input('n');	//введення першого числа
	int i = input('i');	//введення другого числа
	int m = input('m');	//введення третього числа
	int d = gcd(gcd(n, i), m); //знаходження НСД трьох чисел
	cout << "The greatest common divisor is " << d << endl;
	system("pause");
}

int input(char ch)	//введення числа
{
	int a;
	cout << "Enter " << ch << ": ";
	cin >> a;
	return a;
}

int gcd(int a, int b)	//знаходження НСД двох чисел
{
	return b == 0 ? a : gcd(b, a % b);
}
