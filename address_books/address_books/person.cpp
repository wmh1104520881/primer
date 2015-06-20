#include "person.h"

inline
person &person::set()
{
	cout << "������������Ϣ��" << endl;
	string wname;
	unsigned wphonenum;
	string waddr;
	string wsex;
	cin >> wname >> wphonenum >> wsex >> waddr;
	name = wname;
	phonenum = wphonenum;
	sex = wsex;
	addr = waddr;
	return *this;
}
person &person::display()
{
	cout << "������" << name << endl;
	cout << "�绰����: " << phonenum << endl;
	cout << "�ձ� " << sex << endl;
	cout << "סַ�� " << addr << endl;
	return *this;
}
int is_inbook(const vector<person> &waddr_book, const string &name)
{
	for (auto a : waddr_book)
	{
		if (a.get_name() == name)
			return 1;
	}
	return 0;
}
int add_person(vector<person> &waddr_book, const person &p)
{
	if (!is_inbook(waddr_book, p.get_name()))
	{
		waddr_book.push_back(p);
	}
	else
	{
		cout << "�����Ѿ����ڣ�" << endl;
		return 0;
	}
	return 1;
}
int delete_person(vector<person> &waddr_book, const string& name)
{
	if (!is_inbook(waddr_book, name))
	{
		cout << "���˲����ڣ�û�б�Ҫɾ����" << endl;
		return 0;
	}
	auto &iter = waddr_book.cbegin();
	while (iter != waddr_book.cend())
	{
		if ((*iter).get_name() == name)
		{
			waddr_book.erase(iter);
			break;
		}
		++iter;
	}
	return 1;
}
int modify_person(vector<person> &waddr_book, const string& name)
{
	if (!is_inbook(waddr_book,name))
		cout << "û�������" << endl;
	person *p = &check_person(waddr_book, name);
	p->set();
	return 1;
}
person check_person(vector<person> &waddr_book, const string &name)
{
	person p;
	for (auto a : waddr_book)
	{
		if (a.get_name() == name)
		{
			p = a;
			break;
		}
	}
	return p;
}