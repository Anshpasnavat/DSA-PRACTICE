#include <iostream>
using namespace std;

int countFrequency(int arr[], int n, int x){
    int frequency = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            frequency++;
        }

    }return frequency;
}

int main() {
    int arr[] = {2, 5, 2, 8, 2, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int x = 2;
    cout << countFrequency(arr, n, x);
    
}
