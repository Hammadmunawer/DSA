#include <bits/stdc++.h>
using namespace std;


//fibnancii number is that 0 nad 1 and by addinh 0+1 we get new number that 1 and by adding that 1 and 1 we get its go etcc
int fibnanciNumber(int n){
if(n<=1) return n;
int last =fibnanciNumber(n-1);
int slast= fibnanciNumber(n-2);
return last+ slast;
}


int main(){
    cout<<fibnanciNumber(8);

}