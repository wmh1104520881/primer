#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;

int is_equal(int *array1,unsigned array1_len, int *array2,unsigned array2_len)
{
	cout << array1_len << endl;
	cout << array2_len << endl;
	if (array1_len != array2_len)
		return 0;
	for (unsigned i = 0; i < array1_len; i++)
	{
		if (array1[i] != array2[i])
			return 0;
	}
	return 1;
}
int main()
{
	int a1[] = { 1, 2, 3, 4, 5 ,6};
	int a2[] = { 1, 2, 3, 4, 5 };
	unsigned array1_len = sizeof(a1) / sizeof(int);
	unsigned array2_len = sizeof(a2) / sizeof(int);
	if (is_equal(a1,array1_len, a2,array2_len))
		cout << "两个数组相等" << endl;
	else
		cout << "两个数组不相等" << endl;
	
	vector<int> v1 = { 1, 1,1,1};
	vector<int> v2(4, 1);
	if (v1 != v2)
		cout << "两个集合不相等！" << endl;
	else
		cout << "两个集合相等！" << endl;

	system("pause");
	return 0;


}