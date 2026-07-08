#include <iostream>
using namespace std;

int revArr(int arr[], int n) {

    int copyArr[n];

    for(int i = 0; i < n; i++) {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }

    for(int i = 0; i < n; i++) {
        cout << copyArr[i] << " ";
    }

    return 1;
}

int main() {

    int arr[] = {1, 2, 4, 6, 3, 8};

    int n = sizeof(arr) / sizeof(int);

    revArr(arr, n);

}