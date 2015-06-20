#include<iostream>
#include<string>
using std::endl;
using std::cin;
using std::cout;
using std::string;

const string SCORE_RANK[] = { "NO PASS", "D", "C", "B", "A", "A++" };

int main()
{
	int score = 0;
	string rank;
	while (cin >> score )
	{
		if (score > 60)
		{
			rank = SCORE_RANK[(score - 50) / 10];
			if (score % 10 > 7)
				rank += "+";
			else if (score % 10 < 3)
				rank += "-";
			cout << rank << endl;
		}
		else
			cout << SCORE_RANK[0] << endl;
	}

	system("pause");
	return 0;
}