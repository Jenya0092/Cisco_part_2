#include <iostream>
using namespace std;
bool isLeap(int year) {
    bool yr;
if(year%4 == 0 || year%100!=0 && year%400 ==0){
    yr = true;
}
else {yr = false;}
return yr;
}
int main(void) {
for(int yr = 1995; yr < 2017; yr++)
cout << yr << " -> " << isLeap(yr) << endl;
return 0;
}
