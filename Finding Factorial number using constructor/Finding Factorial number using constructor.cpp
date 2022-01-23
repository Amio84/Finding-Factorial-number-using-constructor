#include <iostream>
using namespace std;

class Factorial
{
public:
	Factorial();
	Factorial(int f);
	~Factorial();
	void calculation();
	void display();

private:
	int number, factorial;
};

Factorial::Factorial()
{
	number = 0;
}
Factorial::Factorial(int f)
{
	number = f;
}

Factorial::~Factorial()
{
}

void Factorial::calculation()
{
	factorial = 1;
	for (int i = number; i >= 1; i--)
	{
		factorial = factorial * i;
	}
}

void Factorial::display()
{
	if (number < 0)
	{
		cout << "\n\tError! Factorial of a negative number doesn't exit." << endl;
	}
	else
	{
		cout << "\n\tFactorial of " << number << " is : " << factorial << endl;
	}
}

int main()
{
	int Num;
	cout << "\n\tEnter a positive number: ";
	cin >> Num;

	Factorial Obj(Num);
	Obj.calculation();
	Obj.display();

    return 0;
}