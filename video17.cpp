#include <bits/stdc++.h>
using namespace std;


//array eak aisa dsa ha jo similar trha ka data contain krta ha like agr int ha toh int krey ga aur agr string ha tu string kry ga  most important agr ap int main mae arr[6] ka size declare krty hu tu vo isko garbage value de ga jo hum bta nhi skty ha but agr hum isko int main sae upr isko likhie gye tu ye array kae tmama value ko 0 kr de ga 
//* max size of array is 10^6 inside int main but in gloablly it si 10^7

int largerElement(vector<int> &arr,int n){
     int larger =arr[0];
     for (int i =0;i<n;i++){ 
        if(arr[i]>larger){
            larger=arr[i];
        }
    }
cout<<larger;
}
void scndlargerElement(vector<int> & arr,int n){
    //time complexity   0(n)
int larger =arr[0];
int scndlarger =-1;         
for(int i =0;i<n;i++){
    if(arr[i]>larger){
     scndlarger=larger;
        larger=arr[i];    
    }
   else if(arr[i]<larger && arr[i]> scndlarger){
        scndlarger=arr[i];
    }
}

cout <<"second larger nuber is "<< scndlarger;

}

bool isSorted(int n, vector<int >a){
for (int i=1;i<n;i++){
    if(a[i]>=a[i-1]){
    }
    else{
        return false;
    }
}
return true;
}

void scndSmallest(vector <int> &arr,int n){
    int smallar =arr[0];
int scndsmallar =INT_MAX;         
for(int i =0;i<n;i++){
    if(arr[i]<smallar){
     scndsmallar=smallar;
        smallar=arr[i];    
    }
   else if(arr[i]!=smallar && arr[i]< scndsmallar){
        scndsmallar=arr[i];
    }
}
cout <<"second samllar nuber is "<< scndsmallar;
}


//remove dupalicate from sorted array
int removeDuplicate(int n, vector<int> &arr){
    int i=0;
    for (int j=1;j<n;j++){
   if(arr[j]!=arr[i]){
    arr[i+1]=arr[j];
    i++;
   }
  
    }
     return i+1;
}
int main (){
int n;
cin>> n;
vector <int>arr(n);
for(int i =0;i<n;i++){
cin>>arr[i];

}
int result=removeDuplicate(6,arr);
for(int i=0;i<result;i++){
    cout<<arr[i];
}
    }
//scndSmallest(arr,n);