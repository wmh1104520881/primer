#include "person.h"

int main()
{
	vector<person> v;
	person *p = new person("����Ա",123456789, "��", "���ֵ��ӿƼ���ѧ");
	v.push_back(*p);
	cout << "��ѡ����Ҫ�Ĺ���(1:���ӣ�2��ɾ����3���޸ģ�4���鿴)" << endl;
	int choose;
	cin >> choose;
	person man;
	person *info = nullptr;
	string name;
	switch (choose)
	{
	case 1:
		man.set();
		v.push_back(man);
		break;
	case 2:
		cout << "������Ҫɾ�����˵�����" << endl;
		cin >> name;
		delete_person(v, name);
		break;
	case 3:
		cout << "��������Ҫ�޸ĵ��˵����֣�" << endl;
		cin >> name;
		modify_person(v,name);
		break;
	case 4:
		cout << "��������Ҫ��ѯ���˵����֣�" << endl;
		cin >> name;
		info = &check_person(v, name);
		info->display();
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}