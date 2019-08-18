#include <iostream>

using namespace std;

void selection_sort(int arr[], int n) {
    int minimum;
    for (int i = 0; i < n; i++) {
        minimum = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minimum]) minimum = j;
        }
        swap (arr[i], arr[minimum]);
    }
}

int main() {
    int arr[] = {1, 9, 4, 8, 5, 7, 3, 2, 6};
    selection_sort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
