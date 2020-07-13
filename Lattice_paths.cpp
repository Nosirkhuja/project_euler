/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
*/

#include<iostream>

using namespace std;

uint64_t factorial(int n){
    uint64_t m=1;
    for (int i = 1; i <= n; ++i)
    {
        m=m*i;
    }
    return m;
}

int main(){
    uint64_t n,m;
    cin>>n>>m;
    uint64_t count=1;
    for (int i = 0; i < n; ++i)
    {
        count=count*(2*n-i)/(i+1);
    }
    cout<<count;
}
