#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	unsigned int n,i,add;
	bool io;
	while(cin>>n){
		io=false;
		if(n%2!=0 && n%3!=0 && n!=1){	 
			add=4;
			for(i=5;i<sqrt(n+1);i+=add){
				if(n%i==0) break;
				add=6-add;
			}
			if(i>=sqrt(n+1)) io=true;
		}
			if (io || n==2 || n==3)
				cout<<"質數"<<endl;
			else 
				cout<<"非質數"<<endl; 
	}
	return 0;
}

