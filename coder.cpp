#include <iostream>
#include<climits>
using namespace std;

int secondSmaleest(int arr[], int n){
    int second ;
    int first = arr[0];
    for(int j = 1; j<n;j++){
        if(arr[j]<first){
            second = first ;
            first = arr[j];
        }else if(arr[j]<second){
            second = arr[j];
        }
    }return second;

    
}

int main() {
    int arr[] = {8, 3, 10, 2, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << secondSmaleest(arr, n);
    
}