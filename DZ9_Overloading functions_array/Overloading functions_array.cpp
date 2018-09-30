//Overloading functions_array;
#include<iostream>
#include<ctime>
using namespace std;

int initial(int arr[][5], const int row, const int column);
double initial(double arr1[][5], int row, int column);
char initial(char arr2[][5], int row, int column);
void print(int arr[][5], int row, int column);
void print(double arr1[][5], int row, int column);
void print(char arr2[][5], int row, int column);
int main()
{
	const int row = 5, column = 5;
	int arr[row][column];
	srand(time(NULL));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			arr[i][j] = rand() % 21+10;
	}

	double arr1[row][column] = { { 2.5,3.6,2.3,4.5,2.4 },{ 2.6,4.6,8.2,4.2,6.1 },{ 9.5,1.6,1.5,1.5,4.5 },
	{ 6.5,4.5,9.5,1.5,6.5 }, {2.3,5.6,1.1,5.6,6.4} };
	char arr2[row][column] = { "I   " , "WISH" , "KNOW" , "C++!", "  :)" };
	//Functions for initialization;
	initial(arr, row, column);
	initial(arr1, row, column);
	initial(arr2, row, column);
	//Functions for output to screen;
	cout<<"Result for function to print square array of int type:"<<endl;
	print(arr, row, column);
	cout << endl;
	cout << "Result for function to print square array of double type:" << endl;
	print(arr1, row, column);
	cout << endl;
	cout << "Result for function to print square array of char type:" << endl;
	print(arr2, row, column);

	cout << endl;
	return 0;
}

//Array Initialization

int initial(int arr[][5], const int row, const int column)
{
	return 0;
}

double initial(double arr1[][5], int row, int column)
{
	return 0;
}

char initial(char arr2[][5], int row, int column)
{
	return 0;
}

//Array Print

void print(int arr[][5], int row, int column)
{

for (int i = 0; i < row; i++)
{
for (int j = 0; j < row; j++)
cout << arr[i][j] << " ";
cout << endl;
}
return;
}

void print(double arr1[][5], int row, int column)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
			cout << arr1[i][j] << " ";
		cout << endl;
	}
	return;
}

void print(char arr2[][5], int row, int column)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
			cout << arr2[i][j] << " ";
		cout << endl;
	}
	return;
}
