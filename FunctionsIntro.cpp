#include <iostream>

int Sum(int Addend, int Addend2)
/*
	The variables inside a function may have the same names as the variables inside the main code, but they
	are different variable in different adresses of the memory. The parameters of the function will use 
	the adresses of the variables in the main code. They can also only be acessed inside the function.
*/ 
{
	return Addend + Addend2;
}

int main()
{
	int Addend, Addend2;
	std::cout << "Type a number: " << "\n";
	std::cin >> Addend;
	std::cout << "Type a number sum with first one: " << "\n";
	std::cin >> Addend2;
	std::cout << "The sum of " << Addend << " with " << Addend2 << " is " << Sum(Addend, Addend2) << "\n";

	system("PAUSE");
}