#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
double vector[] = { 1., 2., 3., 4., 5. };
int n = sizeof(vector) / sizeof(vector[0]);
double ArithmeticMean;
double HarmonicMean;
double GeometricMean=1;
double RootMeanSquare;
for(int i = 0;i<n; i++){
    ArithmeticMean =ArithmeticMean + (vector[i]/n);
    double c = c + (1/vector[i]);
    HarmonicMean = n / c;
    GeometricMean = GeometricMean*vector[i];
    if(i==4){
    GeometricMean =pow(GeometricMean,(1./n));
    }
    double r = r+pow(vector[i],2.);
    RootMeanSquare = sqrt(r/n);
    
}


cout << "Arithmetic Mean = " << ArithmeticMean << endl;
cout << "Harmonic Mean = " << HarmonicMean << endl;
cout << "Geometric Mean = " << GeometricMean << endl;
cout << "RootMean Square = " << RootMeanSquare << endl;
cout << endl;
return 0;
}