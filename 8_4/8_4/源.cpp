#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using std::endl;
using std::cin;
using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::ofstream;

int main()
{
	vector<string> v;
	vector<char> v1;
	string path("b.txt");
	ifstream in(path);

	if (in)
	{
		string str;
		char c;
		while ((str = in.getline()) != EOF)
		{
			cout << c<<"  ";
			v1.push_back(c);
		}
	}
	for (auto a : v1)
	{
		cout << a << endl;
	}

	system("pause");
	return 0;
}