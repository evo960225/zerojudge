#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	
	int n;
	int i,add,a;
	
	while(cin>>n){
		i=2;add=1;
		while(sqrt(n+1)>i){
			a=0;
			while(n%i==0){
				a+=1;
				n/=i;
			}
			if(a>0){
				cout<<i;
				if(a>1)
					cout<<"^"<<a;
				if(n!=1)cout<<" * ";
			}
			i+=add;
			if(i>5)
				add=6-add;
			else
				add=2;
		}
		if(n!=1)cout<<n;
		cout<<endl;
	}
	return 0;
}

