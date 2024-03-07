#include <iostream>
using namespace std;

void heapify(double arr[], int N, int i)
{

	int largest = i;

	int l = 2 * i + 1;

	int r = 2 * i + 2;

	if (l < N && arr[l] > arr[largest])
		largest = l;
	if (r < N && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, N, largest);
	}
}

void heapSort(double arr[], int N)
{
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	for (int i = N - 1; i > 0; i--) {
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}

void printArray(double arr[], int N)
{
	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
}

int n;
double arr[1000005];
int main()
{
	cin>>n;
	for(int i=0; i<n; i++)
        cin>>arr[i];
	heapSort(arr, n);

	printArray(arr, n);
}
