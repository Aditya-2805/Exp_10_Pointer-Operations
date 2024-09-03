#include <iostream>
using namespace std;
    int main(){
        int a=10,b=20;
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
/*
a = 20
b = 10
*/