#include<iostream>
#include<string>

using std::istream;
using std::ostream;
using std::string;
using std::cin;
using std::cout;

class Sales_data{
public:
	string isbn() const;
	Sales_data &conbine(const Sales_data &book);

private:
	string bookNo;
	unsigned unit_solds = 0;
	double revenue = 0.0;
};
Sales_data &add(const Sales_data &book1, const Sales_data &book2);
istream read(istream &v, Sales_data &in);
ostream print(ostream &v, const Sales_data &out);

int main()
{
	Sales_data total;
	if (read(cin,total))
	{
		Sales_data tram;     //如果读入第一条记录
		while (read(cin, tram))       //读入第二条记录
		{
			if (total.isbn == tram.isbn)   //如果第二条记录的isbn号等于第一条，结合
			{
				total.conbine(tram);     
			}
			else{
				total = tram;        //第一条记录等于第二条记录，再比较
			}
			}
		print(cout, tram);       //输出最后一条记录
	}
	else
	{
		cout << "no data?";
	}
}