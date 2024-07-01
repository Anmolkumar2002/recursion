#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n == 0){
        return 1;
    }
    int xn1 = pow(x, n - 1);
    int xn = x * xn1;
    return xn;
}
int main(){
    int x, n;
    cout << "Enter a number:" << endl;
    cin >> x;
    cout << "Enter the power:" << endl;
    cin >> n;
    int ans = pow(x, n);
    cout << "power:" << ans << endl;
    return 0;
}