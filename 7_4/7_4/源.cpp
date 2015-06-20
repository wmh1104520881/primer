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
	//构造函数
	Person() = default;
	Person(const string &wname, const string &waddr) :name(wname), addr(waddr){}
	//获取名字
	string get_name()const{ return name; }
	//获取住址
	string get_addr()const{ return addr; }
	//读入数据
	istream &read(istream &is)
	{
		is >> name >> addr;
		return is;
	}
	//打印数据
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