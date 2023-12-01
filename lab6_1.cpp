#include<iostream>
using namespace std;

int main(){
    int x=1;
    int E=0,O=0;
    while(x!=0){
        cout << "Enter an integer: ";
        cin >> x;
        if (x%2==0 && x!=0){
            E++;
        }
        else if(x%2!=0){
            O++;
        }
    }

    cout << "#Even numbers = " << E << endl;
    cout << "#Odd numbers = " << O;
    return 0;
}
