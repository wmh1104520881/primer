#include<iostream>
using std::cout;
using std::endl;
using in_array = int[4];  //ָ���һ��Ԫ����������ֵ

const size_t row = 3;
const size_t line = 4;


int main()
{
	
	int ia[row][line];
	for (size_t i = 0; i != row; ++i)
	for (size_t j = 0; j != line; ++j)
	{
		ia[i][j] = j;
	}

	//ʹ�÷�Χfor������
	for (size_t i = 0; i != row; ++i)
	for (size_t j = 0; j != line; ++j)
	{
		cout << ia[i][j] << endl;
	}
	cout << endl;

	//ʹ��ָ��
	for (in_array *p = ia; p != ia + 3; ++p)
	for (int *q = *p; q != *p + 4; ++q)
		cout << *q << endl;

	system("pause");
	return 0;


}