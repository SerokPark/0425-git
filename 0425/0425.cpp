//
// Serok, 240425, C++ Array
//

#include <iostream>

using namespace std;

#define ROW_SIZE 5
#define COL_SIZE 4


string AgeScore[4][4] = {
{ "방지턱", "19", "66", "68"},
{ "정직한", "20", "73", "94"},
{ "김가루", "19", "58", "37" },
{ "조나단", "20", "82", "29" }
};


string input;


void main()
{
	
	
	while (1) {

		//
		// 1. 입력단
		//
		
		

		cout << endl << "Insert the age :";
		cin >> input;

		if (input == "exit")
		{
			break;
		}


		// 
		// 2. 입력 판별
		//

		//
		//  type의 종류
		//  0 = 입력 오류
		//  1 = Age 19
		//  2 = Age 20
		//
		int type = 0;

		for (int i = 0; i < ROW_SIZE; i++)
		{
			for(int j = 0; j<COL_SIZE; j++)
				if (input == "19")
				{
				type = 1;
				}
				else if (input == "20")
				{
				type = 2;
				}
		}

		// 
		// 3. 입력 처리
		// 
		switch (type)
		{
			// Error
		case 0:
			cout << "오류입니다. 다시 입력해주세요." << endl;
			break;
			// list
		case 1:
			for (int i = 0; i < ROW_SIZE; i++)
			{
				for (int j = 0; j < COL_SIZE; j++)
					cout << "이름 :" << AgeScore[i][j - 1] <<
					"수학점수 ;" << AgeScore[i][j + 2] << endl;
				break;
			}
			// Country Name Match
		case 2:
			
					break;
				}
			}
			
		}

		
	








