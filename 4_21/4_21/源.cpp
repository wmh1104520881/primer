#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<unsigned> v{ 1, 2, 3, 4, 5, 6 };
	vector<unsigned>::iterator iter = v.begin();
	while (iter != v.end())
	{
		*iter = (*iter % 2 == 0) ? *iter : *iter*2;
		++iter;
	}
	for (auto a : v)
		cout << a << endl;
	system("pause");
	return 0;
}