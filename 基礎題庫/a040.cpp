#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int n,m;
	int sum,tmp;
	int i;
	bool pr;
	while(cin>>n>>m){
		pr=false;	
		 for(int i=n;i<=m;++i){
		 	for(tmp=i;tmp!=0;tmp/=10){
		 		sum+=pow(tmp%10,int(log10(i)+1));
		 	}
		 	if(i==sum){
			 	cout<<i<<" ";
			 	pr=true;
			 }
		 	sum=0;
		 }
		 if(!pr)cout<<"none";
		 cout<<endl;
	}
	return 0;
}

