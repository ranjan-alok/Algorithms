#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        int j = i;
        while (j > 0 && temp < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j = j - 1;
        }
        arr[j] = temp;
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
