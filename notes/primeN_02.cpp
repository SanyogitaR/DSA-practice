// Sieve of Eratosthenes
#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n){
    if (n <= 1) return false; // 0, 1, negatives are not prime
    for(int i=2; i*i<=n; i++){
        if(n% i== 0){
            return false;
        }

    }
    return true;
}
int countprimes(int n){
    vector<bool> isPrime(n+1, true);
    int count=0;
    for(int i=2; i<n; i++){
        if(isPrime[i]){
            count++;
            for(int j=i*2; j<n ; j=j+i){
                isPrime[j]=false;            }
        }
    }
    return count;
    
}

int main() {
 cout<< countprimes(10);
   

    return 0;
}