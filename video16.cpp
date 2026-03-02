#include <bits/stdc++.h>
using namespace std;

//time coomplexity is like merge in average practicall case it alwys give o(nlogn) but in worst case it give o(n^2) worst case kia h like hmare pass pivot largest aur smallest hu hr dafa means sb sort hu ga array jiski wja sae quick sort ko phr bhi n-1 tak operation krnae hu gye like 
//arr[1,2,3,4,5] isk 5 piovt ha aur hr dfa jb iski left partiiton hu gyi 4 ga 3 bny ga 2 bny ga 1 bny ga 

int partition(vector<int> &arr,int st,int end){
	int idx=st-1,pivot=arr[end];
	for(int j=st;j<end;j++){
		if(arr[j]>=pivot){
			idx++;
			swap(arr[j],arr[idx]);
		}
	}
	idx++;
	swap(arr[end],arr[idx]);
	return idx;
}

void quickSort(vector<int> &arr,int st,int end){
	if(st<end){
		int pivIdx= partition(arr,st,end);
		quickSort(arr,0,pivIdx-1);  ///left
		quickSort(arr,pivIdx+1,end);  //right
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
quickSort(arr,0,arr.size()-1);
for (int x : arr)
{
    cout<<x<<" ";
}


}