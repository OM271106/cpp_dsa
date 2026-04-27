#include <iostream>
#include <algorithm> // Required for swap()

using namespace std;

// The recursive function
void reverseArr(int a[], int l, int r) {
    if (l >= r) return;        // Base case: stop when indexes meet
    swap(a[l], a[r]);          // Swap the elements
    reverseArr(a, l + 1, r - 1); // Recurse inward
}

int main() {
    int a[] = {2, 4, 3, 5, 1}; // Our array
    int n = 5;                 // Number of elements

    // Call the function: (array, start_index, end_index)
    reverseArr(a, 0, n - 1);

    // Print the result using a simple loop
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}