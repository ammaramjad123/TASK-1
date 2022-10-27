// 2D DYNAMIC ARRAY WITH SAME ROWS AND COLUMNS AND GIVING VALUES TO IT'S DIAGONAL(2) AND IT,S UPPER(1) AND LOWER PART(0) //
#include <iostream>
using namespace std;
void creekscheck2darray(int **&arr,int &rows,int &columns)
{
	cout << "Enter the size of rows and columns :" << endl;
	cin >> rows;
		cin >> columns;
	arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[columns];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == j)
			{
				arr[i][j] = 2;
			}
			if (i < j)
			{
				arr[i][j] = 1;
			}
			if (i > j)
			{
				arr[i][j] = 0;
			}
		}
	}
}
void printarray(int **arr, int rows, int columns)
{
	cout << "Output Of 2D Dynamic Array Is :" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}
int main()
{
	int **arr = nullptr;
	int rows = 0, columns = 0;
	creekscheck2darray(arr,rows,columns);
	printarray(arr,rows, columns);
	system("pause");
	return 0;
}