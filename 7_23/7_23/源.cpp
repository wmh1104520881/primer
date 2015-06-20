#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Screen{
public:
	using pos = unsigned;
	//���캯��
	Screen() = default;
	Screen(const pos &wheight, const pos &wwidth) :height(wheight), width(wwidth){}
	Screen(const pos &wheight, const pos &wwidth, string wcontent) :
		height(wheight), width(wwidth), content(wcontent){}
    //�ƶ�����
	Screen &move(const pos &h,const pos &w);
	//��ӡ���꺯��
	Screen &display();
	//�������꺯��
	Screen &set(const string &s);
private:
	pos height = 0;
	pos width = 0;
	string content;
	pos cursor = 0;
};
inline
Screen &Screen::move(const pos &h,const pos &w)
{
	height += h;
	width += w;
	return *this;
}
Screen &Screen::display()
{
	cout << "��Ļ����Ϊ��" << content << endl;
	cout << "�������Ϊ: (" << height << "," << width <<")"<< endl;

	return *this;
}
Screen &Screen::set(const string &s)
{
	content = s;
	return *this;
}

int main()
{
	Screen myscreen(5, 5, "X");
	Screen *p = &myscreen;
	p->move(3, 6).set("#").display();
	myscreen.display();
	cout << "\n";

	system("pause");
	return 0;
}