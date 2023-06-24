#include <iostream>
using namespace std;

int n;
int arr[1000];

//快速排序
void qsort(int arr[], int low, int high) {
	if (low >= high)return;
	int pivot = arr[low];
	while (low < high)
	{
		while (low < high && pivot <= arr[high]) high--;
		arr[low] = arr[high];

		while (low < high && pivot >= arr[low])low++;
		arr[high] = arr[low];
	}
	arr[low] = pivot;
	qsort(arr, low, low - 1);
	qsort(arr, low + 1, high);
}


int main()
{
	cout << "输入数组长度：";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	qsort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
