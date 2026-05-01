#include <iostream>
#include <algorithm> // Required for swap()

using namespace std;

// Recursive function to reverse (swap) the array
void reverseArray(int arr[], int start, int end) {
    // Base case: stop when the pointers meet or cross in the middle
    if (start >= end) {
        return;
    }
    
    // Swap the elements at the current start and end positions
    swap(arr[start], arr[end]);
    
    // Recurse inward for the next pair
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    
    // 1. Read the size of the array first
    if (!(cin >> n)) {
        return 0; // Exit safely if the file is empty
    }

    int arr[n];
    
    // 2. Read the actual elements into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // 3. Call the recursive function
    // Start index is 0, End index is n-1 (the last item)
    reverseArray(arr, 0, n - 1);
    
    // 4. Print the newly reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<  endl;

    return 0;
}