
#include <bits/stdc++.h>

using namespace std;

int partition(double arr[], int low, int high) {
    int randomIndex = low + rand() % (high - low + 1);

    swap(arr[randomIndex], arr[high]);

    double pivot = arr[high];

    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(double arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    srand(time(0));

    int n;
    cin >> n;

    double arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}
