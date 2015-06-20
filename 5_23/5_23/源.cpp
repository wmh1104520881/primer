#include<iostream>
#include<stdexcept>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
using std::string;

int main()
{
	int a;
	int b;
	cin >> a >> b;
	if (b == 0)
		throw runtime_error("your are sb ,b can be 0!!");
	try{
		int c = a / b;
	}catch(runtime_error error){
		cout <<error.what()<< "your input is wrong" << endl;
	}
	system("pause");
	return 0;
}