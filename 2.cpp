#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int a1=a%4;
    int a2=a%100;
    int a3=a%400;

    if(a1==0 && a2!=0 || a2==0 && a3==0){
        cout << "YES";
    } else {
        cout << "NO";
    }

}