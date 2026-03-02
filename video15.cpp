#include <bits/stdc++.h>
using namespace std;

//merge sort much more optimized than other algporithm .merge algo means divide and merge
//time complexity worst case o(n*log2n) and sc o(n)
void merge(vector<int> &arr,int st,int mid ,int end){
	vector <int> temp;
	int i =st,j=mid+1;
	while(i<=mid&&j<=end){
		if(arr[i]<=arr[j]){
			temp.push_back(arr[i]);
		i++;
		}else{
			temp.push_back(arr[j]);
			j++; 
		}
		
	}
	while(i<=mid){
			temp.push_back(arr[i]);
		i++;
	}
	while(j<=end){
			temp.push_back(arr[j]);
			j++;
	}
	for (int idx=0;idx<temp.size();idx++){
		arr[idx+st]=temp[idx];
	}
}

void mergeSort(vector<int> &arr,int st,int end){
	if(st<end){
		int mid=st+(end-st)/2;
		mergeSort( arr, st, mid);//left half
		mergeSort( arr, mid+1,end);//right half
		merge(arr,st,mid,end);//merge
	}
} 



int main(){
int n;
cin>>n;
vector <int> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
mergeSort(arr,0,arr.size()-1);
for (int x : arr)
{
    cout<<x<<" ";
}


}