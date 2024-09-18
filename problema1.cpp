#include<iostream>
using namespace std;

int main() {
  int x{0};
  int suma{0};
  while(x<1000000){
    if (x%15==0){
      suma=suma + x;
        }
    x=x+1;
        }
  cout<<"La suma de los numeros multiplos de 3 y de 5 es "<<suma;
}