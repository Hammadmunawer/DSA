#include <bits/stdc++.h>
using namespace std;
//functional recrsion when we want to return something and paramterizes when we want to print something

void sumnumb(int i,int sum ){
if(i<1){
    cout<<sum;
    return ;
}
sumnumb(i-1,sum+i);
}

int sumnumbers(int n){
    //functional
   if(n==0) return 0;
   return  n + sumnumbers(n-1);
}

int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}

int main(){
  int n;
  cin>>n;
 cout<< fact(n);
}