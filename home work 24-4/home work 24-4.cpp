#include <iostream>
#include <string>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandomNumber(int arr[100], int& arrlong)
{
	cout << "Enter number of element :";
	cin >> arrlong;

	for (int i = 0; i < arrlong; i++)
	{
		arr[i] = RandomNumber(1, 100);

	}
}
void printArray(int arr[100], int arrlong)
{
	for (int i = 0; i < arrlong; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int maxArray(int arr[100], int arrlong)
{
	int maxx = 0;
	for (int i = 0; i < arrlong; i++)
	{
		if (arr[i] > maxx)
			maxx = arr[i];
	}
	return maxx;
}


int main()
{
	int arr[100], arrlong;

	srand((unsigned)time(NULL));
	FillArrayWithRandomNumber(arr, arrlong);
	cout << "array element :";
	printArray(arr, arrlong);
	cout << "max number is  " << maxArray(arr, arrlong);

}