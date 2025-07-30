#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int copy=n;
    int sumofcubes=0;
    while(n){
        int dig= n%10;
        sumofcubes += (dig*dig*dig);
        n=n/10;
    }
    return sumofcubes== copy;
}

int main() {
    int n=90;


   if( isArmstrong(n)){
    cout<<"is armstrong number\n";

   }
   else{
    cout<<" not an Armstrong number";
   }

    return 0;
}