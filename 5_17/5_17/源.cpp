#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1{ 0, 1, 1, 2 };
	vector<int> v2{ 0, 4, 1, 2, 3, 5, 8 };
	bool is_true = true;   //≈–∂œ «∑Òœ‡µ»
	auto size = (v1.size() < v2.size()) ? v1.size() : v2.size();
	for (unsigned i = 0; i != size; ++i)
		{
			if (v1[i] != v2[i])
			{
				is_true = false;
				break;
			}
		}

	cout << "v1 is equal v2 ?  answer is " << is_true << endl;

	system("pause");
	return 0;
}