#include<iostream>
#include<string>
using std::cin;
using std::string;
using std::cout;
using std::endl;

int main()
{
	string str1, str2;
	string is_continue;
	do{
		cout << "please input two string :" << endl;
		cin >> str1 >> str2;
		cout << "the shorter is " << ((str1.size() <= str2.size()) ? str1 : str2) << endl;
		cout << "do you want to continue ?" << endl;
		cin >> is_continue;
	} while (!is_continue.empty() && is_continue[0] != 'e');

	system("pause");
	return 0;
	
}