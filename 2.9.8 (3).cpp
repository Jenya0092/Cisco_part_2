#include <iostream>
using namespace std;
int main(void) {
int vector1[] = {1,2,3,2,1};

int n = sizeof(vector1) / sizeof(vector1[0]);

n = n-1;
int a = 0;

for(int i =0; i<=n/2;i++){
    int c = n-i;
    if(vector1[i]==vector1[c]){
a++;
    if(a==(n+1)/2){cout<<"It is palindrom!";}
    }
    else{cout<<"it is not palindrom!";
        break;
    }

}


}