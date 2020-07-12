/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include<iostream>

using namespace std;

int pythagor(int n){
    for(int a=1;a<n;a++){
        for(int b=a+1;b<n;b++){
            int c=n-a-b;
            if(c<=b) break;
            if (a*a+b*b==c*c) return a*b*c;
        }
    }
        return 0;
}

int main(){
    int n;
    cin>>n;
    if (pythagor(n)==0) cout<<"Not found";
    else cout<<pythagor(n);
}
