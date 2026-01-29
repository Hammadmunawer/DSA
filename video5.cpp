#include<bits/stdc++.h>
using namespace std;

//pair is utility library
void explainpair(){
    pair<int,int> p= {1,2};
    cout <<p.first<<" "<<p.second;
    pair<int,pair<int,pair<int,int>>> b ={1,{2,{3,5}}};
    cout<< b.first << " "<<b.second.first<<b.second.second.first<<b.second.second.second;
    cout<<endl;
  pair<int,int> arr[]={{1,2},{4,3},{4,6}};
  cout<<arr[0].first<<arr[0].second;
}

//vector is a container we use bcz its in dynamic in size it is not arr bcz array have fix size 

void explainvector(){
    vector < int> v;
    v.push_back(1);    //{1}
    v.emplace_back(2);  ///{1,2}
   vector < pair <int,int>> vec;
   vec.push_back({2,3});   //{1,3}
   vec.emplace_back(5,6); //automatically assume {1,3,5,6}
   vector <int> p(5,100); //fix size 5 {100,100,100,100,100}
   vector <int> c(5);  //garbage value {0,0,0,0,0} depend on compiler
    vector <int> v1(5,20); //{20,20,20,20,20,20}
    vector <int> v2(v1); 
    vector<int>::iterator it = v1.begin();
    cout<<*(it);
    it++;
    cout<<*(it)<<" ";
    it =it+2;
    cout<<*(it)<<" ";
    vector<int>::iterator it =v1.end();  //{1,3,4} end() point to after 4
    vector<int>::reverse_iterator rit =v1.rend();  //{4,3,1} after 1 
    vector<int> ::reverse_iterator rit =v1.rbegin(); //point to 4
    cout<<v1.back(); // point to last memory {1,4,5} lie point to 5

//for printing all vector value

for (vector<int>::iterator it=v1.begin(); it !=v1.end();it++){
cout<<*(it)<<endl;
cout<<"simple loop";
}

//shortcut   auto automatically assign datatype according to datat 
for(auto it=v1.begin();it !=v1.end();it++ ){
cout<<*(it);
cout<<"auto";

}

//for each loop
for(auto it:v1){
cout<<it<<" ";
}

//deleteion in vector 
//{1,2,4,5}
v1.erase(v1.begin()+1);  //{1,4,5}
//{1,2,3,4,5}
//erase.(start,end)
v1.erase(v1.begin()+2,v1.begin()+4);  //{1,2,4} bcz ye last element del nhi krta ha 

//insert function  
vector<int> v3(2,100);  //{100,100}
v3.insert(v3.begin(),300); //{300,100,100}
v3.insert(v3.begin()+1,2,10);   //{300,10,10,100,100}

vector<int> v4(2,50);
v3.insert(v3.begin(),v4.begin(),v4.end());  //{50,50,300,10,10,100,100}
cout<<v3.size();
//{1,2}
v3.pop_back();//return  {1}
//v3->{1,2}
//v2->{3,4}
v3.swap(v2);  /// v2->{1,2} v3->{3,4}  
v3.clear();  //erase the entire vector {}
cout<<v.empty(); //if no empty give true




}

//list is container dynamic nature 
void explainList(){
    list <int> l1;
    l1.push_back(2); //{2}
    l1.emplace_back(4); //{2,4}

    l1.push_front(3); //{3,2,4}
    l1.emplace_front(); //{2,4} 
    //reset function same as vector
    //begim,end,rebegin,rend,clear,isnert,size,swap all are same 
 }
 
// deque same as vector
void explaindeque(){
    deque <int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(3);  //{1,2}
   dq.push_front(3); //{3,1,2}
   dq.emplace_front(4); ///{3,4,1,2}
   dq.pop_back(); // {3,4,1}
   dq.pop_front();  //{4,1}

   dq.back();
   dq.front();
   //rest function same as vector 
   //begin,rend,end,rbegin,clear ,insert ,size , swap 


}
//stack follow lifo
void explainstack(){
stack<int> st;
st.push(1);  //{1}
st.push(2);  //{2,1}
st.push(3);  //{3,2,1}
st.emplace(4); //{4,3,2,1}
cout<<st.top(); ///give 4

st.pop(); //  {3,2,1}

cout<<st.top();  ///3
st.size(); /// 3
st.empty();  //no stck no empty

stack<int> st1,st2;
st1.swap(st2);
///in stck every fucntion happen in constant time  o(1)
}
//queue same as stack follow fifo
void explainQueue(){
    queue<int>q;
    q.push(1);  //{1}
    q.push(2);  ///{1,2}
    q.push(3);   //{123}
    q.emplace(4);   //{1234}
    q.back() +=5;
    cout<<q.back(); //print 9
    q.front();  ///1
    q.pop()   ;   //{2,3,9}

//all operation same as stack
}

//priority queue value largeest stays at top tree ds maintain
void explianpriortyqu(){
    priority_queue<int> pq; //max heap
    pq.push(5); //{5}
    pq.push(2);  //{5,2}
    pq.push(8);   //{8,5,2}
    pq.emplace(10);  //{10,8,5,2}

    pq.top()   ;   // 10
    pq.pop();  // {8.5,2}
    pq.top()   ;  //8

    //want to store minimum value following syntax
    priority_queue<int,vector<int>,greater<int>> pq1;  //min heap
    pq1.push(1); //{1}
    pq1.push(2);  //{1,2}
    pq1.emplace(20);  //{1,2,20}
    pq1.top();   //1

}
             
//set container tre  stcuture
void explainset(){
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); //{1,2}
    st.insert(2);  //not insert {1,2}
    st.insert(4);  //{1,2,4}
    st.insert(3);   //{1,2,3,4}

    auto it=st.find(3); //return iterator which poiunt to 3
//{1,2,4,,5}
    auto it=st.find(6);  ///if elemnet it will give iterator st.end()  which point right after end her after 5
  st.erase(5);  //logn time complexity erase 5 

  int cnt =st.count(1);//if occue give 1 else 0 bcz it give unique
  auto it =st.find(3);
  st.erase(it);  //here we give iterator to del  it have constant time   
   auto it1= st.find(1);//{1,2,3,4,5}
   auto it2= st.find(3);
   st.erase(it1,it2);//  {3,4,5}
   auto it= st.lower_bound(2); //lower bound kia krta ha jo value search kry g agar vo usy mil jaty ha tu uska index de ga agr nhi mily gye us sae next greater value de ga. ime complexity logn agr vo array  mae nhi ha tu last arry.end() de ga ye hmhesha index deta ha 
   auto it = st.upper_bound(4);//upper bound kia krta ha gar mil jata ha tu us sae next iterator de ga greater 4, ha tu next mae agr 5 hova ut vo de ga ye hmesha index deta ha time comlexoty logn;
   

}

//multi set which obey sorted not unique
void explaimultiset(){
multiset<int>ms;
ms.insert(1); ///{1}
ms.insert(1);  //{1,1}
ms.insert(1);  //{1,1,1}
ms.erase(1);  //erase all 1
int cnt = ms.count(1); //count 1
ms.erase(ms.find(1));   //find point the iterator but in this erase(addres) only del that address if give addrs of both it will remove boith 
}

//unorder set it store unique but not sorted msotly o(1) but worst case is o(n) which not happen regular
void explainunorderset(){
     unordered_set<int> st;
     //all function work but lower bound aur upper bound desnt work;

}

//map store data in key -value pair but key must be unique or sorted ds
void explainmap(){
     map<int,int> mpp;
     map<int, pair<int,int>> mpp;
     map<pair<int,int>, int> mpp;  //{2,3}=10
     mpp[1]=2;
     mpp.emplace(3,1);
     mpp.insert({2,1});
    for(auto it: mpp){
        it.first; //keys
        it.second;  //value
    }
     auto it = mpp.find(3); //if not it will give afte map
     auto it = mpp.lower_bound(2);
     auto it =mpp.upper_bound(3);  //work on keys 
     
   
}

//multimap it store sorted but witrh duplication

void multimap(){

}
//unorder multimap store randmoize it has unique keys 
void unordermulitmap(){

}

bool comp (pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
      if(p1.first>p2.first) return true;
      return false;


}

void extra(){
    int a;
    int n;
    sort(a,a+n);  //sort(start,end)
    sort(a,a+n,greater<int>());   //it will give in descending order

int num = 7;
int cnt = __builtin_popcount(num);//give number of 1 bit in that number 

long long num1= 5678978678685;
int cnt = __builtin_popcountll(num1);

string s ="123";
do{
    cout<<s;

}while (next_permutation(s.begin(),s.end())); //if no permuatation it will return falls


}

 //imopotant point
//push-> logn
//top-> o(1)
//pop-> logn
//set -> store everthing unique and sorted
 //in prioty que data store in tree not in linear 
 ///in stck every fucntion happen in constant time  o(1)
 //vector time complexity for insert is very costly but in list isnertion is very cheap vectoe maintain sinle linklist but list maintain doublelinklist

int main(){


};






