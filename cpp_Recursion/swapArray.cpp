#include <iostream>
#include <fstream> // Required for ifstream
#include <algorithm> // Required for swap

using namespace std;

// Fixed recursive function
// a[]: the array, i: current index, n: total size of array
void swapArr(int a[], int i, int n) {
    // Base case: stop when we reach the middle
    if (i >= n / 2) return; 

    // Swap elements from start and end
    swap(a[i], a[n - 1 - i]); 

    // Recursive call: increment index i, but n stays the same
    swapArr(a, i + 1, n); 
}

int main() {
    int n;
    // We use cin because the tasks.json will feed input.txt into it
    if (!(cin >> n)) return 0;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    swapArr(a, 0, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}