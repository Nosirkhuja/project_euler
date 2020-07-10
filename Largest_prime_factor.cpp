/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<iostream>
#include<math.h>

using namespace std;

bool prime( uint64_t n){ 
    for(uint64_t i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}

int main(){
     uint64_t n;
     uint64_t max=0;
    cin>>n;
    for( uint64_t i=1; i<=sqrt(n); i++){
        if (n%i==0 && prime(i) && i>max) max=i;
    } 
    cout<<max;
}
