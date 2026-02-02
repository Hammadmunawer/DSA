#include <bits/stdc++.h>
using namespace std;

//selection sort  select minimum means ascending order 
//select minium element and replace that element with first and that first elment swap wiht that miimum lik [12,34,56,7,8]-> [7,34,56,12,8] goes on like this

// o(n)  if now swap
void selection_sort(int arr[],int n){

for (int i=0;i<=n-2;i++){
    int mini =i;
    for (int j = i; j<=n-1 ; j++)
    {
        if(arr[j]<arr[mini]){
            mini=j;
        }
    }
    int temp =arr[mini];
    arr[mini]=arr[i];
    arr[i]= temp;
    // swap(arr[mini],arr[i]);
}
}

//bubble sort  push max at last by adjacent swaps      o(ne2)time compelxity    
void bubble_sort(int arr[],int n){
    for (int i = n-1; i >=0; i--)
    {
        int didswap=0;
        for (int j = 0; j <=i-1; j++)
        {
           if(arr[j]>arr[j+1]){
            int temp= arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            didswap=1;
           }
        }
        if(didswap ==0 ){
            break;
        }
        cout<<"runs\n";
    }
    
}

//insertion sort worst case o(ne2) best case o(n)
void insertion_sort(int arr[],int n){
  for(int i=0;i<=n-1;i++){
    int j=i;
    while (j>0 && arr[j-1]> arr[j])
    {
        int temp =arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    
  }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
insertion_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
}
}