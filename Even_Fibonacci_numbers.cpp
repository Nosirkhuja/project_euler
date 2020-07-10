/* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include<iostream>

using namespace std;

int main(){
    long long sum=0;
    long long f1,f2,f3;
    f1=0;
    f2=1;
    f3=0;
    long long n;
    cin>>n;
    if (n==-1){
        cout<<0;
        return 0;

    }
    while(f2+f1<=n){
        f3=f2+f1;
        if (f3%2==0 && f3<4000000) sum=sum+f3;
        f1=f2;
        f2=f3;
    }
    cout<<sum;
}
