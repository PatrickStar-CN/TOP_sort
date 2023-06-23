#include <iostream>
using namespace std;

int n;
int arr[1000];

// 冒泡排序
void bubble_sort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])swap(arr[j], arr[j + 1]);
		}
	}
}



int main()
{
	cout << "输入数组长度：";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bubble_sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] <<" ";
	}
	cout << endl;
}
