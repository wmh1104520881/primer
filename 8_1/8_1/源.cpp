#include<iostream>
using std::endl;
using std::cin;
using std::cout;
using std::istream;

istream &input(istream &is)
{
	int a = 0;
	auto old_state = is.rdstate();
	is.clear();
	while (is >> a)
	{
		cout << "你所输入的是："<<a << endl;
	}
	is.setstate(old_state);
	return is;
}

int main()
{
	input(cin);

	system("pause");
	return 0;
}