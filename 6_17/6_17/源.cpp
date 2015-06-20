#include<iostream>
#include<string>
using std::endl;
using std::cout;
using std::string;

//判断string 对象是否含在大写字母
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
	cout << "是含有大写？ " << ((sign == 0) ? "否" : "是") << endl;

	up_word(str);
	cout << "变换后的字符串为 ：" << str<<endl;

	system("pause");
	return 0;
}