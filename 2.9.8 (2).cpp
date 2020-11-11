#include <iostream>
using namespace std;

int main(void) {
    int money, calc;
    cout<<"Enter your number: ";
    cin>>money;
    int banknots [5] = {50,20,10,5,1};  
    for(int i = 0;i<5;i++){
        while(money>=banknots[i]){
            calc = money/banknots[i];
            money=money%banknots[i];
            for(int c = 1; c<=calc; c++){
                cout<<banknots[i]<<" ";
            }
        }

    }

}
