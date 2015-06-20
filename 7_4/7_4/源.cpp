#include<iostream>
#include<string>

using std::istream;
using std::ostream;
using std::string;
using std::cout;
using std::endl;
using std::cin;

class Person{
public:
	//���캯��
	Person() = default;
	Person(const string &wname, const string &waddr) :name(wname), addr(waddr){}
	//��ȡ����
	string get_name()const{ return name; }
	//��ȡסַ
	string get_addr()const{ return addr; }
	//��������
	istream &read(istream &is)
	{
		is >> name >> addr;
		return is;
	}
	//��ӡ����
	ostream &print(ostream &os)
	{
		os << name << addr;
		return os;
	}

private:
	string name;
	string addr;
};

int main()
{
	Person p;
	Person p2("wang", "guidian");
	p.read(cin);
	p.print(cout);
	p2.print(cout);

	system("pause");
	return 0;
}