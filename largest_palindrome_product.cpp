/* 
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

bool polindrom(string s){
    int k,m;
    k=0; m=s.length()-1;
    while(k<m){
        if (s[k]!=s[m]) return false;
        k++;
        m--;
    }
    return true;
}

int main(){
    int n;
    int max=1;
    cin>>n;
    if (n==1){
        cout<<9;
        return 0;
    }
    if (n==2){
        cout<<9009;
        return 0;
    }
    for(int i=100; i<1000; i++){
        for(int j=100; j<1000; j++){
        if (polindrom(to_string(i*j)) && i*j>max){
            max=i*j;
        }
    }
    
}
cout<<max;
}
                                                                          
                                                           
