#include <bits/stdc++.h>
using namespace std;


//reverse an array
void reversearr(int i,int arr[],int n){
if(i>=n/2) return;
swap(arr[i],arr[n-i-1]);
reversearr(i+1,arr,n);
}

//string is plaaindrom or not 
bool reverseString(int i, string &s){
  if(i>=s.size()/2) return true;
  if(s[i] != s[s.size()-i-1]) return false;
  return reverseString(i+1,s);
}

int main(){
  string s="madsm";
  cout << reverseString(0,s);
  
}