#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

class person{
public:
	//构造函数
	person() = default;
	person(const string &wname, const unsigned &wphonenum, const string &wsex, const string &waddr) :
		name(wname), phonenum(wphonenum), sex(wsex), addr(waddr){}
	//获取姓名
	string get_name()const{ return name; }
	//获取电话号码
	unsigned get_phonenum()const{ return phonenum; }
    //设置人物信息
	person &set();
	//打印人物信息
	person &display();
private:
	string name;     //姓名
	unsigned phonenum = 0;  //电话号码
	string sex;
	string addr;     //地址
};

//增加人物信息
int add_person(vector<person> &waddr_book, const person &p);
//删除人物信息
int delete_person(vector<person> &waddr_book, const string &name);
//修改人物信息
int modify_person(vector<person> &waddr_book, const string &name);
//查询人物信息
person check_person( vector<person> &waddr_book, const string &name);
person *check_person( vector<person> &waddr_book, const unsigned wphonenum);
int is_inbook(const vector<person> &waddr_book, const string &name);

#endif // !PERSON_H
