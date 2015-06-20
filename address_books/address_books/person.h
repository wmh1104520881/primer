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
	//���캯��
	person() = default;
	person(const string &wname, const unsigned &wphonenum, const string &wsex, const string &waddr) :
		name(wname), phonenum(wphonenum), sex(wsex), addr(waddr){}
	//��ȡ����
	string get_name()const{ return name; }
	//��ȡ�绰����
	unsigned get_phonenum()const{ return phonenum; }
    //����������Ϣ
	person &set();
	//��ӡ������Ϣ
	person &display();
private:
	string name;     //����
	unsigned phonenum = 0;  //�绰����
	string sex;
	string addr;     //��ַ
};

//����������Ϣ
int add_person(vector<person> &waddr_book, const person &p);
//ɾ��������Ϣ
int delete_person(vector<person> &waddr_book, const string &name);
//�޸�������Ϣ
int modify_person(vector<person> &waddr_book, const string &name);
//��ѯ������Ϣ
person check_person( vector<person> &waddr_book, const string &name);
person *check_person( vector<person> &waddr_book, const unsigned wphonenum);
int is_inbook(const vector<person> &waddr_book, const string &name);

#endif // !PERSON_H
