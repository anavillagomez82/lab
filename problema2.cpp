#include<iostream>
using namespace std;

int main() {
  int n{0};
  int x{1};
  cout<<"Ingrese un numero entero: ";
  cin>>n;
  while (x<n){
    if (x%2!=0){
      cout<<x<<";";
  x=x+1;
  }

  }

}