#include<iostream>
#include<string>
using std::endl;
using std::cout;
using std::string;

//�ж�string �����Ƿ��ڴ�д��ĸ
int is_upword(const string &str)
{
	auto index = str.cbegin();
	while (index != str.cend())
	{
		if (isupper(*index))
			return 1;
		++index;
	}
	return 0;
}

int up_word(string &str)
{
	for (auto &a : str)
	{
		if (!isspace(a) && !isupper(a))
			a = toupper(a);
	}
	return 1;
}
int main()
{
	string str = "ni hao !";
	int sign = is_upword(str);
	cout << "�Ǻ��д�д�� " << ((sign == 0) ? "��" : "��") << endl;

	up_word(str);
	cout << "�任����ַ���Ϊ ��" << str<<endl;

	system("pause");
	return 0;
}