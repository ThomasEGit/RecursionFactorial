// RecursionFactorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int factorialthis(int x)
{
	if (x == 1)
	{
		return x;
	}
	else
	{
		x = x * factorialthis(x - 1);
	}
}

int main()
{
	cout << factorialthis(3);
}
