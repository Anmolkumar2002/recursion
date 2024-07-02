#include<iostream>
using namespace std;
int maxofArray(int arr[], int size, int idx){
    if(idx == size - 1){
        return arr[idx];
    }
    int misa = maxofArray(arr, size, idx + 1);
    if(misa > arr[idx]){
        return misa;
    }
    else{
        return arr[idx];
    }
}
int main(){
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = maxofArray(arr, n, 0);
    cout << "Maximimum of array is : " << max ;
    return 0;
}