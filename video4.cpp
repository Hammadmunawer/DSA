#include <iostream>
using namespace std;

void print1(){
		for (int i =0; i<4; i++){
		for (int j =0;j<4;j++){
			cout <<"*";
		}
		cout<<endl;
	}
};

void print2(){
	cout <<	endl;
	cout <<endl;
	cout <<endl;
	for(int i=0; i<5;i++){
		for(int j = 0 ; j<=i;j++){
			cout <<"*";
		}
		cout<<endl;
	}
}

void print3(){
	cout <<	endl;
	cout <<endl;
	cout <<endl;
	for(int i=1; i<=5;i++){
		for(int j = 1 ; j<=i;j++){
			cout <<j;
		}
		cout<<endl;
	}
}

void print4(){
	cout <<	endl;
	cout <<endl;
	cout <<endl;
	for(int i=1; i<=5;i++){
		for(int j = 1 ; j<=i;j++){
			cout <<i;
		}
		cout<<endl;
	}
}
	
void print5(){
	cout <<	endl;
	cout <<endl;
	cout <<endl;
	for(int i=1; i<=5;i++){
		for(int j = 5 ; j>=i;j--){
			cout <<"*";
		}
		cout<<endl;
	}
}

void print6(){
	cout <<	endl;
	cout <<endl;
	cout <<endl;
	for(int i=5; i>=1;i--){
		for(int j = 1 ; j<=i;j++){
			cout <<j;
		}
		cout<<endl;
	}
}

void print7(){
	
	cout<<endl;
	cout<<endl;
	
	for (int i=0;i<5;i++){
		//space
		for (int j =0; j<5-i-1;j++ ){
			cout<<" ";
		}
		//stars
		for(int j =0; j<2*i+1;j++){
		cout<<"*";	
		}
		//space
		for(int j =0; j<5-i-1;j++){
			cout<<"";
		}
cout<<endl;
	}
	
}

void print8(){
	cout <<endl;
	cout<<endl;
	for (int i =4;i>=0;i--){
		//space
		for(int j=0;j<5-i-1;j++){
			cout<<" ";
		};
		//stars
		for (int j=0;j<2*i+1;j++){
			cout <<"*";
		}
		//space
			for(int j=0;j<5-i-1;j++){
			cout<<" ";
		}
		cout <<endl;
	}
}

void print9(){
	cout <<endl;
	cout<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
	cout<< endl;	
	}
	
	for(int i=0;i<=3;i++){
		for (int j=3;j>=i;j--){
			cout<<"*";
		}
			cout<<endl;
	}


}

void print10() {
    int n = 4;
    int space = 2 * (n - 1);

    for (int i = 1; i <= n; i++) {

        // left numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // right numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}

void print11(){
	int num=1;
	for(int i= 1;i<=5;i++){
		for(int j=1;j<=i;j++){
           cout <<num<<' ';
		   num =num +1;
		}
		cout<<endl;
	}
}

void print12(){
	int n=5;
	for (int i =0;i<n;i++){
		for (char ch='A';ch<='A'+i;ch++){
         cout<<ch<<" ";
		}
		cout<<endl;;
	}
}

void print13(){
	int n=0;
	for (int i =4;i>=n;i--){
		for (char ch='A';ch<='A'+i;ch++){
         cout<<ch<<" ";
		}
		cout<<endl;;
	}
}

void print14(){
	for (int i=0;i<5;i++){
		char ch ='A'+i;
		for(int j=0;j<=i;j++){
          cout <<ch<<" ";

		}
        cout<<endl;
		
	}

}

void print15(){
	for(int i =0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
           cout<<" ";
		}
		char ch='A';
		int breakpoint= (2*i+1)/2;
		for (int j = 1; j <=2*i+1 ; j++)
		{
			cout<<ch;
			if(j<=breakpoint) ch++;
			else ch--;

		}
		cout<<endl;		
	}
}

void print16(){
	for(int i=0;i<5;i++){
        for (char ch='E'-i;ch<='E';ch++){
			cout<<ch;
		}
		cout<<endl;
	}
}

void print17(){
	int n=5;
	int inis=0;
	for(int i=0;i<n;i++){
       for(int j=1;j<=n-i;j++){
		cout<<"*";
	   }
          for(int j=1;j<inis;j++){
			cout<<" ";
		  }

	    for(int j=1;j<=n-i;j++){
		cout<<"*";
	   }
	   inis +=2;
	   cout<<endl;
	}
	inis=8;
		for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
		cout<<"*";
	   }
          for(int j=1;j<inis;j++){
			cout<<" ";
		  }

	    for(int j=1;j<=i;j++){
		cout<<"*";
	   }
	   inis -=2;
	   cout<<endl;
	}



}

void print18(){
  int n=5;
  int spaces=2*n-2;
	for(int i=1;i<=2*n-1;i++){
		int stars=i;
		if(i>n) stars =2*n-i;
     for(int j=1;j<=stars;j++){
		cout<<"*";
	 }
	 for(int j=1;j<=spaces;j++){
		cout<<" ";
	 }
	  for(int j=1;j<=stars;j++){
		cout<<"*"; 
	 }
	  cout <<endl;
	  if(i<n) spaces -=2;
	  else spaces +=2;
	  


	}
}

void print19(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if( i==0 || j == 0 || i==n-1 || j==n-1){
				cout <<"*";
			}
			else cout<<" ";
		}
		cout<<endl;
	}
}

void print20(){
	int n=4;
for(int i=0; i<2*n-1;i++){
	for(int j=0;j<2*n-1;j++){
         int top=i;
		 int left=j;
		 int right=(2*n-2)-j;
		 int down=(2*n-2)-i;
        cout <<(n-min(min(top,down),min(left,right)))<<" ";
	}
	cout<<endl;

}


}

int main(){
		print20();
return 0;
}