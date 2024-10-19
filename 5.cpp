#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a>b && a>c ){
        cout << a;
    } else if (a<b && c<b) {
        cout << b;
    }else if (a<c && b<c){
        cout << c;
    } else if (a==b || b==c){
        cout << b;
    } else if(a==c){
        cout << a;
    }
    }
