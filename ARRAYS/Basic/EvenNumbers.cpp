#include <iostream>
using namespace std;

int evenNum(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 4, 6, 3, 8};
    int n = sizeof(arr) / sizeof(int); 
    int result = evenNum(arr,n);
    cout << result ;

} 