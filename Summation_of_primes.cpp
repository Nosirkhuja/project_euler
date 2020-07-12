/*
Summation of primes
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million. 
*/

#include<iostream>
#include<cmath>

using namespace std;

bool prime(long n){
    for(long i=2;i<=sqrt(n);i++){
        if ((n%i)==0) return false;
    }
    return true;
}

int main(){
    long n;
    cin>>n;
    long long sum=0;
    for(long i=2;i<n;i++){
        if (prime(i)) sum=sum+i;
    }
    cout<<sum;
}
