#include <string>
#include <iostream>
using namespace std;
// Krystal Maughan
// CSIS 137
// In class assignment

//1.  when the compiler generates the code/ when it is called 
// find minimum index in array
//template for the minimum of an array
template <typename T> //header, defines generic data type T

//2. 
T maximumindex(T arr[], int size)
{
	T largest = arr[0]; //set first element to be smallest 
	//T index = 0;
	int index = 0;
	for (int k = 0; k < size; k++)
	{
		//T index = 0;
		if (arr[k] > largest) //if needed update smallest (ie the new smallest
		{
			cout << k;
			largest = arr[k];
			
		}
		if (arr[k] == largest){
			index = k;
			
		}
	}
	return index;
}
int main()
{
	int arr1[] = { 40, 20, 35 };
	int arr2[] = { 22, 45, 667 };
	double arr3[] = { 1, 45, 3 };
	//string arr2[] = { "Zoe", "Snoopy", "Bob", "Waldorf" };
	cout << "The maximum index in arr1 is: " << maximumindex(arr1, 3) << endl;
	cout << "The maximum index in arr2 is: " << maximumindex(arr2, 3) << endl;
	cout << "The maximum index in arr3 is: " << maximumindex(arr3, 3) << endl;

	//cout << "The minimum index in arr2 is: " << minimum(arr2, 4) << endl;
	system("PAUSE");
	return 0;
}

//3 That they are able to be used with the value operators
