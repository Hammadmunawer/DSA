#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
    
    //int cnt=0;
    // cout<<"extraction of digit"<<" "<<endl;
    // while (n>0)
    // {
        
    //     int lastdigit =n %10;
    //     cout<<"last digit"<<lastdigit<<endl;
    //     cnt = cnt+1;
    //     cout<<"count"<<cnt<<endl;
    //       cout<<" before number "<<n<<endl;
    //     n=n/10;
    //     cout<<"after division number "<<n<<endl;
    // }
    // return cnt;
    //timecomplexity o(log10(n)) if division is dvide by 2,3 etc base is that number aur agr division hu gyi tu TC log hu gye always 
    
}

int reversenum(){
    int n;
    cin>>n;
    int revnum=0;
    while (n>0)
    {
        int ld=n%10;
        revnum = (revnum *10) +ld;
        n=n/10;

    }
    cout<<revnum;
    
}

int pallindrom(){
       int n;
    cin>>n;
   int dup=n;
    int revnum=0;
    while (n>0)
    {
        int ld=n%10;
        revnum = (revnum *10) +ld;
        n=n/10;

    }
    if( dup == revnum)  cout<<"true"<<endl;
    else cout<<"false"<<endl;
    
}

int amstrongnumb(){
    int n;
    cin>>n;
   int dup=n;
   int sum=0;
   while (n>0)
   {
    int ld = n%10;
    sum = sum +(ld*ld*ld);
    n=n/10;

   }
   if(dup == sum )  cout<<"true";
   else cout<< "false" ;
   
}  

void printDivisions(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }

    }
}

void prime(){
    //exactl 2 factor 1 and itslef
    int n;
    cin>>n;
     int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i) count++;
        }
    }
      if(count == 2) cout << "true";
    else cout << "false";
}

int gcd(int a,int b){
    while (a>0 && b>0){}
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if( a==0) return b;
    else a;
    
}


int main(){
 prime();
  return 0;
}