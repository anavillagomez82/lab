#include <iostream>
using namespace std;

int main() {
   int n;
   int x{0};
   cout<<"Ingrese un numero: ";
   cin>>n;
   while(x<n){
       if (n%2!=0 && n%3!=0){
         cout<<n<<endl;
   }
     x=x+1;
 }
}
 