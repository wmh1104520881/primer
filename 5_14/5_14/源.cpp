#include<iostream>
#include<vector>
#include<string>
using std::endl;
using std::string;
using std::cout;
using std::cin;
using std::vector;

int main()
{
	vector<string> v;
	string input;
	while (cin >> input)
	{
		v.push_back(input);
	}
	//����
	int repeat = 1;  //���ʳ��ִ���
	int max_repeat = 1;  //�����ִ���
	auto iter = v.begin();
	string max_str("no max str");    //����������ִ����ĵ���
	while (iter != v.cend())
	{
		//�жϵ�ǰ�����Ƿ�����һ����ȣ�����ȣ�������1
		if ((iter + 1) != v.cend())
		{
			if (*iter == *(iter + 1))
				repeat += 1;
			else
				repeat = 1;
		}
		//������ʳ��ִ���������������������������ִ���
		if (repeat > max_repeat)
		{
			max_repeat = repeat;
			max_str = *iter;
		}
		++iter;
	}
	cout << "the max repeat str is :" << max_str << " is occur " << max_repeat << " times" << endl;

	system("pause");
	return 0;
}