#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
    int i, j, key;
    for (j = 1; j < n; j++) {
        key = arr[j];
        i = j-1;
        while (i >= 0 && arr[i] > key) {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }
}

int main() {
    int arr[] = {1, 9, 4, 8, 5, 7, 3, 2, 6};
    insertion_sort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
