#include <iostream>
#include <unordered_set>
using namespace std;

int containDuplicate(int arr[], int n){
    std::unordered_set<int> m;
    for(int i = 0; i < n; i++){
        if(m.find(arr[i]) != m.end()){
            return true;
        }
        m.insert(arr[i]);
    }
    return false;
}

int main() {

    int arr[] = {2,1,5,1,3,2};
    int n = sizeof(arr) / sizeof(int);
    cout << containDuplicate(arr, n);

}