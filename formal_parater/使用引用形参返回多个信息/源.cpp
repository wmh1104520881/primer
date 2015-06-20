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
	cout << c << " 第一次出现的位置是 " << pos << endl;
	cout << c << " 出现的次数为 " << count << endl;
	
	system("pause");
	return 0;
}