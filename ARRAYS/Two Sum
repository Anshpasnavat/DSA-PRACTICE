#include <iostream>
using namespace std;

bool twoSum(int arr[], int n, int target) {

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j<n;j++){
            if(target == arr[i]+arr[j]){
                return true;
            }
    
        }
    }

    return false;
}

int main() {

    int arr[] = {1, 2, 4, 6, 3, 8};

    int n = sizeof(arr) / sizeof(int);

    int target = 10;

    cout << twoSum(arr, n, target);

}