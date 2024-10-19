#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    int d=c%b;
    int g=c%a;
    int f=a*b;

    if(d==0 && f>c || g==0 && f>c){
        cout << "YES";
    } else {
        cout << "NO";
    }
    }
