//
// Serok, 240425, C++ Practice2_Pointer(reverse the array)
//

# include <iostream>
# define Size 10
using namespace std;

void reverse(int* Arr);
void reverse2(int Arr[]);

int main()
{
	int i_arr[Size] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Original : "; 
	reverse(i_arr);
	cout << "Reverse :";
	reverse2(i_arr);

	return 0;


}


void reverse(int* Arr)
{
	for (int i = 0; i < Size; i++)
	{
		cout << Arr[i] << endl;
		
	}
}

void reverse2(int Arr[])
{
	for (int i = Size - 1; i >= 0; i--)
	{
		cout << Arr[i];
	}
}

