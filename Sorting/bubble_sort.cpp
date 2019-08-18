#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) swap (arr[i], arr[j]);
        }
    }
}

int main() {
    int arr[] = {1, 9, 4, 8, 5, 7, 3, 2, 6};
    bubble_sort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
