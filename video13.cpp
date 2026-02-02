#include <bits/stdc++.h>
using namespace std;
//Hashing Pre-storing and hashing .hasing is come due to large complexity of program if we have large input data program can't wait for 1 nad half minute to excute this is where hasing come. 
//hashing mae hum int kae liyae maximum size 10e6 main mae aur globally agr krna hova tu hum 10e7 tak kr skty ha vrna segmantation error aye ga. aur for bool kae liyae ha hum main mae 10e7 kr skty hain aur agr globally krna hova tu hum 10e8 kr skty hain.


int findNumber(int numb, int arr[],int n){
    //is method mae issue ha kae agr ismae input zyada aye tu humae hmara program time bhut le ga excute honae mae honiue like normal program 10 ki power 8 leta ha ye le ga 10ki power10 means hmara code 100s like 1.5 mintue tak execution time le ga jo kae bhut zyda ha that y hum hash use krty ha jo pre calculation krta ha kae kon sa element kitni dfa aya ha .
int count=0;
for(int i=0;i<n;i++){
if(arr[i]==numb){
    count=count+1;
}
}
return count;
}

// int main(){
// int n;
// cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// //pre calculation
//   int hash[13]={0}; //maximum in main we can declare hash array is hash[10power6] if we declare 10ki power 7 it give segmantation fault in globally we can declare arr[1e7] but not in main
//   for (int i = 0; i < n; i++)
//   {
//     hash[arr[i]] +=1;
//   }
  
//    int q;
//    cin>>q;
//    while (q--)
//    {
//     int number;
//     cin>>number;
//     //fetch
//     cout<<hash[number]<<endl;
//    }}

//hashing for character fow lower word loop start from 0 to 26 formula is ch-a 'a' is asci the alue that is 97 and for upper and lower case loop start from 0 to 256 
//in charcter like in int there is issue of intialiizng hash array above 1e6 but in charcter it ismax 256 so that y there will be no error




int main(){
   string s;
   cin>>s;
//pre compute for upper and lower

int hash[256]={0};
for (int i = 0; i <s.size(); i++)
{
    hash[s[i]]++;
}
int q;
cin>>q;
while (q--)
{
   int c;
   cin>>c;
   //fetch
   cout<<hash[c]<<endl;
}
return 0;
}

   //pre compute
//    int hash[26]={0};
//    for (int i = 0; i < s.size(); i++)
//    {
//     hash[s[i]-'a']++;
//    }
   
//    int q;
//    cin>>q;
//    while (q--) //post increment jb conditon run hu gye tab minus hu ga 
//    {
//     char c;
//     cin>>c;
//     //fetch
//     cout<<hash[c-'a']<<endl;
//   }
   
