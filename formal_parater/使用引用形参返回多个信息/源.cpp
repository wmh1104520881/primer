#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

int str_position(const string &str, char c, int &count)
{
	int str_len = str.size();
	int pos = -1;
	for (int i = 0; i < str_len; ++i)
	{
		if (str[i] == c)
		{
			if (pos == -1)
				pos = i;
			++count;
		}
	}
	return pos;
}
int main()
{
	string str = "hello,hehe";
	int count = 0;
	char c = 'o';
	int pos = str_position(str, c, count);
	cout << c << " ��һ�γ��ֵ�λ���� " << pos << endl;
	cout << c << " ���ֵĴ���Ϊ " << count << endl;
	
	system("pause");
	return 0;
}