#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int a[] = { 2, 3, 45, 6 };
	vector<int> v(begin(a), end(a));
	for (auto a : v)
		cout << a << endl;

	//3.42将vector复制给数组
	int b[10] = {};
	unsigned index = 0;
	for (auto i = v.begin(); i != v.end(); i++)
	{
		b[index] = *i;
		index++;
	}
	for (auto a : b)
	if (a != 0)
		cout << a << endl;
	system("pause");
	return 0;
}