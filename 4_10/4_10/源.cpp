#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> v;
	int input_value = 0;
	const unsigned end_value = 42;

	while (cin >> input_value)
	{
		if (input_value == end_value)
			break;
		v.push_back(input_value);
	}
	for (const auto a : v)
		cout << a << " ";
	cout << endl;
	system("pause");
	return 0;
}