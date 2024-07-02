#include<iostream>
using namespace std;
void displayReverse(int arr[], int size, int idx){
    if(idx == size){
        return;
    }
    displayReverse(arr, size, idx + 1);
    cout << arr[idx] << endl;
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
    displayReverse(arr, n, 0);
    return 0;
}