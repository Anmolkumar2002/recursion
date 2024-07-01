#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n == 0){
        return 1;
    }
    int xnb2 = pow(x, n/2);
    int xn = xnb2 * xnb2;

    if(n % 2 == 1){
        xn = xn * x;
    }
    return xn;
}
int main(){
    int x, n;
    cout << "Enter a number:" << endl;
    cin >> x;
    cout << "Enter the power of number:" << endl;
    cin >> n;
    int ans = pow(x, n);
    cout << "Power:" << ans << endl;
    return 0;
}