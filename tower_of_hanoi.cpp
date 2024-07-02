#include<iostream>
using namespace std;
void toh(int n, int t1, int t2, int t3){
    if(n == 0){
        return;
    }
    toh(n - 1, t1, t3, t2);
    cout << n << "[" << t1 << " -> " << t2 << "]" << endl;
    toh(n - 1, t3, t2, t1);

}
int main(){
    int n;
    char t1= 10, t2 = 11, t3 = 12;//three rod or say tower
    cout << "Enter the number of disc:" << endl;
    cin >> n;
    toh(n, t1, t2, t3);
    return 0;
}