/* 

Power digit sum
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

P.S. at the base can be any number

Sample Input:

2 15

Sample Output:

26

*/





#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string s= to_string(trunc(pow(n,m)));
    int i=0;
    int sum=0;
    while(s[i]!='.'){
        sum+=s[i]-'0';
        i++;
    }
    cout<<sum;
}
