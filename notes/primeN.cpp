#include <iostream>
using namespace std;

string isPrime(int n){
    if (n <= 1) return "Non Prime number"; // 0, 1, negatives are not prime
    for(int i=2; i*i<=n; i++){
        if(n% i== 0){
            return "Non Prime numer";
        }

    }
    return "prime numer";
}

int main() {
    // to take input 
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

   int n=32;
   cout<< isPrime(n) <<endl;

    return 0;
}