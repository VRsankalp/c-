 #include <iostream>
using namespace std;

void reverseArray(int *arr, int n) {
    int *left = arr;           // reference: arr points to the first element
    int *right = arr + n - 1;  // reference: last element's address

    while (left < right) {
        // swap using dereferencing
        int temp = *left;   // get value at left
        *left = *right;     // assign value at right into left
        *right = temp;      // put old left into right

        left++;   // move pointer forward
        right--;  // move pointer backward
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";   // dereferencing while printing
    }

    return 0;
}
