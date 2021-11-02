#include <iostream>
#include <cmath>	//функція sin()
#include <iomanip>	//форматування виводу проміжних даних
using namespace std;

int main() 
{
	float x = 0.5; int n;	//х - початкове дане, n - параметр суми
	double eps = 0;			//eps - сума
	
	do		//перевірка параметру на натуральність
	{
		cout << "Enter n: "; cin >> n;	//введення параметру
		if (n < 1)
			cout << "Wrong number. Try again" << endl; 
	} while (n < 1);
	
	for (int i = 1; i <= n; i++) //обрахунок суми
	{
		long mult = i * i;		//квадрат лічильника
		eps += 1. / mult;				//обрахунок суми
		cout << "eps = "
			<< setw(5) << fixed << setprecision(7)	//форматування
			<< eps << endl;							//проміжне виведення суми
	}
	
	float y = 1. / (eps * sin(x));				//обрахунок результату
	cout << endl << "Result: " << y << endl;	//виведення результату
	system("pause");
}