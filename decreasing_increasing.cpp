#include<iostream>
using namespace std;
void pdi(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    pdi(n - 1);
    cout << n << endl;
}
int main(){
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    pdi(n);
    return 0;
}