#include <bits/stdc++.h>
using namespace std;

void printName(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout<<"hammad"<<endl;
       printName(i+1,n);
    }
}

void printLineraly(int i,int n){
    if(i>n) return;
    cout<<i;
    printLineraly(i+1,n);
}
 //backtracking print n to 1
void printOppositeNum(int i,int n){
    if(n<i) return;
    cout<<n;
    printOppositeNum(i,n-1);
}

//backtracking 1 to n
void print1ton(int i,int n){
if(i<1) return;

print1ton(i-1,n);
cout<<i;
}

int main(){
   int n;
   cin>>n;
   print1ton(n,n);
}