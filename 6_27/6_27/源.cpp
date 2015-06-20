#include<iostream>
using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> li)
{
	int sum = 0;
	for (const auto a : li)
	{
		sum += a;
	}
	return sum;
}
int main()
{
	cout << sum({1,2,3,4}) << endl;

	system("pause");
	return 0;
}