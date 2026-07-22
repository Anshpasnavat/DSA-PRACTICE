#include<iostream>
using namespace std;
 int main(){
    int arr[]= {-1,1,2,-2,1};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;

    for(int i = 0; i<n; i++){
        for(int j =i;j<n;j++){
            for (int k = j; k < n; k++) {
                sum += arr[i] + arr[j] + arr[k];
            }
        }    
    }
    cout << sum;
    return 0;
}