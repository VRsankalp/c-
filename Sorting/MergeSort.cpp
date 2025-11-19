 #include <iostream>
using namespace std;

void merge(int arr[], int lower, int mid, int upper) {
    int i = lower;
    int j = mid + 1;
    int k = 0;

    int size = upper - lower + 1;
    int newArr[size];

    // Merge two sorted halves (descending)
    while (i <= mid && j <= upper) {
        if (arr[i] > arr[j]) {
            newArr[k++] = arr[i++];
        } else {
            newArr[k++] = arr[j++];
        }
    }

    // Copy remaining from left half
    while (i <= mid) {
        newArr[k++] = arr[i++];
    }

    // Copy remaining from right half
    while (j <= upper) {
        newArr[k++] = arr[j++];
    }

    // Copy back to original array
    for (int x = 0; x < size; x++) {
        arr[lower + x] = newArr[x];
    }
}

void mergeSort(int arr[], int lower, int upper) {
    if (lower >= upper) return;  // Base case

    int mid = lower + (upper - lower) / 2;

    mergeSort(arr, lower, mid);
    mergeSort(arr, mid + 1, upper);
    merge(arr, lower, mid, upper);
}

int main() {
    int arr[] = {5, 1, 6, 2, 3, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    cout<< "Sorted array (descending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
