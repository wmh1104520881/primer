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
		Sales_data tram;     //��������һ����¼
		while (read(cin, tram))       //����ڶ�����¼
		{
			if (total.isbn == tram.isbn)   //����ڶ�����¼��isbn�ŵ��ڵ�һ�������
			{
				total.conbine(tram);     
			}
			else{
				total = tram;        //��һ����¼���ڵڶ�����¼���ٱȽ�
			}
			}
		print(cout, tram);       //������һ����¼
	}
	else
	{
		cout << "no data?";
	}
}