#include <bits/stdc++.h>
using namespace std;

//recursion
//when a function call itself until a specified condition its met like base condition to stop recusiron 
//stack overflow jb numerous function caal hu aur waiting mae hu tab stack overflow hota ha 

int cnt=0;
void print(){
    if(cnt==3) return;
    cout<<cnt<<endl;
    cnt++;
    print();
}

int main(){
    print();
    return 0;
}