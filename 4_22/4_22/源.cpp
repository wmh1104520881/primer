#include<iostream>
using std::endl;
using std::cin;
using std::cout;

int main()
{
	int score = 0;
	int stop = -1;
	while (stop != 0)
	{
		cin >> score;
		if (score >= 90)
			cout << "high pass" << endl;
		else if (score > 60 && score < 75)
			cout << "lower pass" << endl;
		else if (score == 60)
			cout << "pass" << endl;
		else
			cout << "fail" << endl;
		cin >> stop;
	}
	system("pause");
	return 0;
}