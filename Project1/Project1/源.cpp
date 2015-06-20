#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int *reset(int *);
double *reset(double *);

double squre(double x)
{
	return x*x;
}
int main()
{
	double x;
	cin >>x;
	cout << squre(x);
	system("pause");
	return 0;
}