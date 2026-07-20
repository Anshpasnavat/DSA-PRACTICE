#include<iostream>
#include<algorithm>
using namespace std;


int moveZeros(int arr[], int n){
    int i = 0;
    for(int j = 0;j<n;j++){
        if(arr[j]!=0){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}    

int main(){
    int arr[]= {2,0,7,0,9,7,5};
    int n = sizeof(arr)/sizeof(int);
    int newLength = moveZeros(arr, n);
    for(int i=0;i<newLength;i++){
        cout << arr[i];
    }

 }