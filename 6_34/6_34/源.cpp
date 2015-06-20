#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

int factorial(int val)
{
	if (val != 0)
		return factorial(val - 1)*val;
	return 1;
}

int main()
{
	int a = 5;
	int sum = factorial(5);

	cout << sum << endl;

	system("pause");
	return 0;
}