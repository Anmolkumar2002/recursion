#include<iostream>
using namespace std;
void display(int arr[], int size, int idx){
    if(idx == size){
        return;
    }
    cout << arr[idx] << endl;
    display(arr, size, idx + 1);
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
    display(arr, n, 0);
    return 0;
}