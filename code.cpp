#include<iostream>
using namespace std;
 int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);


    for(int i = 0; i<n; i++){
        for(int j =i;j<n;j++){
            cout << '[';
            int k = i;
            for (int k = i; k <= j; k++) {
                if(k==j){cout << arr[k] ;}
                else{cout << arr[k] << ',';}
            }
            if(k==n-1){
                cout<< "]";
            }else{
                cout << "],";
            }
            
        } cout << endl;  
    }
    return 0;
}