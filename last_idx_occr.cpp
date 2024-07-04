#include<iostream>
using namespace std;
int firstIndex(int arr[], int size, int idx, int d){
    if(idx == -1){
        return -1;
    }
    if(arr[idx] == d){
        return idx;
    }else{
        int ans = firstIndex(arr, size, idx - 1, d);
        return ans;
    }
}
int main(){
    int n, data;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter that number you want to find first index of occurence: ";
    cin >> data;
    int fi = firstIndex(arr, n, n - 1, data);
    cout << "First index occurence of number " << data << " is: " << fi;
    return 0;
}