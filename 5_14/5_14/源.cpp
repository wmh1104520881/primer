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
	//查找
	int repeat = 1;  //单词出现次数
	int max_repeat = 1;  //最多出现次数
	auto iter = v.begin();
	string max_str("no max str");    //保存最大再现次数的单词
	while (iter != v.cend())
	{
		//判断当前单词是否与下一个相等，若相等，记数加1
		if ((iter + 1) != v.cend())
		{
			if (*iter == *(iter + 1))
				repeat += 1;
			else
				repeat = 1;
		}
		//如果单词出现次数大于最大出现数，则更新最大出现次数
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