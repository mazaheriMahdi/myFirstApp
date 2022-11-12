#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cout << "Enter tow value : " ;
    cin >> a >> b;
    if(a>b){
        cout << "Max = " << a << "\t";
    }else if (a < b){
        cout << "Max = " << b << "\t";
    }else{
        cout << "Equal \n";
    }
}
