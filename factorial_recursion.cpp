#include<iostream>
using namespace std;
int fact(int n){
    if(n == 1){
        return 1;
    }
    int fn1 = fact(n -1);
    int fn = n * fn1;
    return fn;
}
int main(){
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;
    return 0;
}