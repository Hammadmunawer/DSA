#include <bits/stdc++.h>
using namespace std;
//map hashing  preference is unorder map worst case in  happen rarly
//map hashing mae hmae size declare nhi krna prta like hmare aray mae hum hash array bnaty tu farz kr hum nae 12 ki but element 2 tu ye eak masl ha jo ka map mae nhi ha jitna element ha utny hi store hu gye naw zada naw kam map store value in sorted order 

//time complexity for order map
//for storjng na fetching -> log(n)
//for unorder map
//for storing and fetching -> o(1) for average and best case but of worst case that is o(n) this is the advantage use of unorder map 

//workimg of hash
//1.dvison method 2.folding method 3. mid square method
//worst case tab aye ga jb hmare pass chain mae eak hi index mae limited isze mae data stire hu isy collosion bhi khty h a
 

int main(){
int n;
cin>>n;
unordered_map<int,int> mpp;
int arr[n];
 for (int i = 0; i <n; i++)
 {
   cin>>arr[i];
   
   mpp[arr[i]]++;
 }
//pre compute


//iterate in map   
for (auto it:mpp)
{
 cout<<it.first<<"->"<<it.second<<endl;
}


 int q;
 cin>>q;
 while (q--)
 {
    int numb;
    cin>>numb;
    cout<<mpp[numb]<<endl;
    
 }
 return 0;
 
}