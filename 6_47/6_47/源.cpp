#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int coutVector(vector<int> v, unsigned index);
int coutVector(vector<int> v,unsigned index)
{
	if (index < v.size())
	{
		cout << v[index] << endl;
		cout << "Error: " << __FILE__ << endl;
		cout << "at line" << __LINE__ << endl;
		cout << "compiled on " << __DATE__ << endl;
		return coutVector(v, index + 1);
	}
	return 1;
}

int main()
{
	vector<int> v = { 1, 2, 4, 5, 6 };
	unsigned index = 0;
	coutVector(v, index);

	system("pause");
	return 0;
}