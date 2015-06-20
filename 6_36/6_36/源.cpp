#include<iostream>
using std::cout;
using std::endl;
using ART = int[10];
ART* stament(int a);

ART* stament(int a)
{
	int b[10] = { 0 };
	for (auto s : b)
		cout << s << endl;
	for (auto &v : b)
		v = a;
	return &b;
}

int(*staments(int a))[10];

int(*staments(int a))[10]
{
		int c[10] = { 0 };
		for (auto s : c)
			cout << s << endl;
		for (auto &v : c)
			v = a;
		return &c;
}

int main()
{
	int a = 4;
	ART* s = stament(4);
	cout << *s[0] << endl;

	system("pause");
	return 0;
}