/* Smallest multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


#include<iostream>

using namespace std;

int nod(long a, long b){
    for(long i=a;i>0;i--){
        if (a%i==0 && b%i==0) return i;
    }
    return 1;
}

int nok(long a, long b){
    return (a*b)/nod(a,b);
}

int main(){
    long n;
    long min=1;
    cin>>n;
    for(long i=2; i<=n; i++){
        min=nok(min,i);
    }
    cout<<min;
}
