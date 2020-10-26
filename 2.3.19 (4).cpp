#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int pow;
    long num =1;
    double m_num =1;
    cout<<"Enter pow which you want to apply to 2 (it has to be between -13 and 63) : ";
    cin>>pow;
    if(pow<=63 && pow>=1){
        int i;
        for (i=1; i<=pow; i++){
            num=num*2;
        }
        cout<<num;
    }
       if(pow>=-20 && pow<=0){
        int h;
        for (h=1; h<=pow*(-1); h++){
            num=num*2;
            m_num = 1./num;
            
            
        }
        
        cout<<setprecision(15)<<m_num;
        
    }
    
  
}