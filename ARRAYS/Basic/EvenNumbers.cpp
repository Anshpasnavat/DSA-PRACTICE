#include<iostream>
using namespace std;

int EvenNumber(int arr[] ,int n){
    int count = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]= {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(int);
    cout << EvenNumber(arr, n); 
    
}