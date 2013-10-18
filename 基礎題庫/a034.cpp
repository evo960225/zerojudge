#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	
	int n;
	string st;
	while(cin>>n){
		st="";
		while(n!=0){
			if(n%2==1)st="1"+st;
			else st="0"+st;
			n/=2;
		}
		cout<<st<<endl;
	}
	return 0;
}

