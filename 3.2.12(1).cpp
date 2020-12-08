#include <iostream>

using namespace std;

int main()
{
  int vector[] = { 3, -5, 7, 10, -4, -45, 5, 2, -13 };
  int n = sizeof(vector) / sizeof(vector[0]);
  int num = *(vector);
  for(int i = 0; i<=n;i++){
  if(*(vector+i)<num){
      num = *(vector+i);
  }
  }
  cout<<num;
  return 0;
}