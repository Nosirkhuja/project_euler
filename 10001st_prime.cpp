/* 10001st prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number? */

#include<iostream>
#include<cmath>

using namespace std;

bool prime(int n){
    for(int i=2; i<=sqrt(n);i++){
        if (n%i==0) return false; 
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    int i=2;
    while(n>0){
        if (prime(i)) n--;
        i++;
    }
    cout<<i-1;
}
