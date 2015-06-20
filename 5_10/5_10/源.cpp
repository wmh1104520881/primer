#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	const string text = "thIs world Is beautiful!";
	int acnt = 0;
	int ecnt = 0;
	int icnt = 0;
	int ocnt = 0;
	int ucnt = 0;
	int othercnt = 0;
	int spacecnt = 0;

	auto iter = text.begin();
	while (iter != text.end())
	{
		char s = *iter;
		if (!isspace(*iter)&&isupper(*iter))
			s = tolower(*iter);
		if (isspace(*iter))
			++spacecnt;
		else{
			switch (s)
			{
			case 'a':
				acnt++;
				break;
			case 'e':
				ecnt++;
				break;
			case 'i':
				icnt++;
				break;
			case 'o':
				ocnt++;
				break;
			case 'u':
				ucnt++;
				break;
			default:
				othercnt++;
				break;
			}
		}
		++iter;
	}
	cout << "a is : " << acnt << endl;
	cout << "e is : " << ecnt << endl;
	cout << "i is : " << icnt << endl;
	cout << "o is : " << ocnt << endl;
	cout << "u is : " << ucnt << endl;
	cout << "other is : " << othercnt << endl;
	cout << "space is : " << spacecnt << endl;

	system("pause");
	return 0;
}