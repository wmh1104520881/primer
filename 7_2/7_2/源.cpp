#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

class Sales_data{
public:
	
	string isbn() const{ return bookNo; }
	Sales_data &combine(const Sales_data &book)
	{
		if (bookNo == book.bookNo)
		{
			units_sold += book.units_sold;
			revenue += book.revenue;
		}

		return *this;
	}

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	
};