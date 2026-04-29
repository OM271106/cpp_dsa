#include <iostream>
#include <algorithm> // Required for the swap() function

using namespace std;

// Recursive function to swap the array
void swapArr(int a[], int i, int n) {
    // Base case: stop when we reach the middle of the array
    if (i >= n / 2) {
        return;
    }
    
    // Swap the elements from the start and the end
    swap(a[i], a[n - i - 1]);
    
    // Move to the next pair
    swapArr(a, i + 1, n);
}

int main() {
    // 1. Hardcoded array (No input.txt needed!)
    // These are the exact numbers you were trying to use earlier
    int a[] = {1, 2, 3, 4}; 
    int n = 4; // Size of the array
    
    // 2. Call the recursive function starting at index 0
    swapArr(a, 0, n);
    
    // 3. Print the swapped array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}