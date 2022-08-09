#include <iostream>
using namespace std;
void insertion_sort(int* arr, int n);

int main()
{
	int num;
	cout << "Please enter the length: " << endl;
	cin >> num;
	int array[num];
	cout << "Please enter the elements: " << endl;
	for(int i = 0; i < num; ++i)
		cin >> array[i];
	insertion_sort(array, num);
	for(int i : array)
		cout << i << " ";
	return 0;
}
void insertion_sort(int* arr, int n)
{
	for(int i = 1; i < n; ++i)
	{
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;

	}
}
