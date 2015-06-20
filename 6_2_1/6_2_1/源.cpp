#include<iostream>
#include"swap.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x, y;
	cin >> x >> y;
	swap(&x, &y);
	cout << x << y;
	system("pause");
	return 0;
}