/* Sum square difference
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/


/*                     MY SOLUTION          */

/* 1+2+3+...+n=n(n+1)/2; 1^2+2^2+3^2+...n^2=n(n+1)(2n+1)/6 */

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n*(n+1)*n*(n+1)/4 - n*(n+1)*(2*n+1)/6;
}
