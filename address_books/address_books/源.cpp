#include "person.h"

int main()
{
	vector<person> v;
	person *p = new person("管理员",123456789, "男", "桂林电子科技大学");
	v.push_back(*p);
	cout << "请选择你要的功能(1:增加，2：删除，3：修改，4，查看)" << endl;
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
		cout << "请输入要删除的人的名字" << endl;
		cin >> name;
		delete_person(v, name);
		break;
	case 3:
		cout << "请输入你要修改的人的名字：" << endl;
		cin >> name;
		modify_person(v,name);
		break;
	case 4:
		cout << "请输入你要查询的人的名字：" << endl;
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