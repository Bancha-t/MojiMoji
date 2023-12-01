#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    int E = 0 , O = 0 ;
    while(x != 0){
        if(x % 2 == 0){
            E += 1 ;
        }
        else{
            O += 1 ;
        }
    cout << "Enter an integer: ";
    cin >> x;

    
    }

    cout << "#Even numbers = " << E << " \n";
    cout << "#Odd numbers = " << O << " \n"; 
    return 0;
}