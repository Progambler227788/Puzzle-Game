#include <iostream>
#include <conio.h>

using namespace std;

bool findWordInPuzzle(char original[][10], char toSearch[], int row, int column, int index, bool &d)
{
	if (toSearch[index] == '\0')
		return true;
	else if (original[row][column + 1] == toSearch[index])
	{
		d = false; // Horizontal
		return findWordInPuzzle(original, toSearch, row, column+1, index+1, d);
	}
	else if (original[row + 1][column] == toSearch[index])
	{
		d = true;  // vertical
		return findWordInPuzzle(original, toSearch, row+1, column, index+1, d);
	}
	return false;
}

int main()
{      bool check = false;

		char word[10];
		char arr[10][10] = { { 'a' , 's' , 'j' , 'l' , 'i' , 'x' , 'a' , 'p' , 'e' } , { 'j' ,  'h' , 'b' , 'x' , 'e' , 'e' , 'n' , 'p' , 'p' } , { 'h' , 'o' , 't' , 't' , 'h' , 'b' , 's' , 'w' , 'y' } , { 'r' , 'o' , 'a' , 'i' , 'n' , 'u' , 'y' , 'z' , 'h' } , { 'p' ,  't' , 'f' , 'x' , 'r' , 'd' , 'z' , 'k' , 'q' } , { 't' , 'p' , 'n' , 'l' , 'q' , 'o' , 'y' , 'j' , 'y' } , { 'a' , 'n' , 'h' , 'a' , 'p' , 'f' , 'g' , 'b' , 'g' } , { 'h' , 'x' , 'a' , 's' , 'h' , 'w' , 'a' , 'b' , 's' } , { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'm' , 'c' , 'e' } , { 'x' , 'y' , 'e' , 'u' , 'p' , 'd' , 'q' , 'b' , 'a'} };
		cout << "Your grid is : " << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << "Enter word to find : ";
		const int size = 10;
		char brr[size];
		cin >> brr;
		int n = 0;
		while (brr[n] != '\0')
			cout << brr[n++] << " ";
		cout << endl;
		bool isFound = false;
		bool direction = false;
		int pk=0;
		//True for vertical 
		//False for Horizontal
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (brr[0] == arr[i][j])
				{
					isFound = findWordInPuzzle(arr, brr, i, j, 1, direction);
					if (isFound)
					{   check=true;
						cout << "Found At Row : " << i << " and Column : " << j << endl;
						if (direction)
							cout << "Direction : Vertical" << endl;
						else
							cout << "Direction : Horizontal" << endl;
						break;
					}
				
					
				}
			
			
			}
		}

    if(check==false) cout<<"Not Found\n";
	return 0;
}
