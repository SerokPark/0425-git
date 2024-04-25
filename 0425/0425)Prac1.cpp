//
// Serok, 240425, C++ Array
//

#include <iostream>

using namespace std;

#define ROW_SIZE 5
#define COL_SIZE 4

int main()
{
	string AgeScore[5][4] = {
		{"이름", "나이", "국어", "수학"},
		{"방지턱", "19", "66", "68"},
		{"정직한", "20", "73", "94"},
		{"김가루", "19", "58", "37"},
		{"조나단", "20", "82", "29"}
	};


	string age;

	while (1)
	{
		cout << endl << "Insert the age :";
		cin >> age;

		// type
		// 0. "exit" 입력 시 종료
		// 1. 19,20
		// 2. Doesn't exist

		int type = 0;


		if (age == "exit")
		{
			type = 0;
		}
		else
		{
			for (int i = 1; i < ROW_SIZE; i++)
			{
				if (age == AgeScore[i][1])
				{
					type = 1;
					break;
				}
				else
				{
					type = 2;
				}
			}
		}

		switch (type)
		{
		case 0:
			cout << "Exit." << endl;
			return 0;

		case 1:
			for (int j = 1; j < ROW_SIZE; j++)
			{
				if (age == AgeScore[j][1])
				{
					cout << "Name: " << AgeScore[j][0] << ", Math: " << AgeScore[j][3] << endl;
				}
			}
			break;

		case 2:
			cout << "404 Not Found." << endl;
			break;
		}
	}
}