//
// Serok, 240425, C++ Practice Dynamic Array
//

#include <iostream>

using namespace std;

void main()
{
	int n2;
	cout << "insert the number : " << endl;
	cin >> n2;

	int* arrStudent = new int[n2];

	for (int i = 0; i < n2; i++)
	{
		arrStudent[i] = i + 1; // 동적 배열 사용
		

	}
	int Score;
	int SumScore = 0;
	int* arrScore = new int[n2];
	for (int i = 0; i < n2; i++)
	{
		cout << "insert the " << i << "student's Score :";
		cin >> Score;
		arrScore[i] = Score;
		cout << arrScore[i] << endl;
		SumScore += Score;

		
	}

	cout << "Mean of the Total Score is : " << float(SumScore) / float(n2);

	

}
