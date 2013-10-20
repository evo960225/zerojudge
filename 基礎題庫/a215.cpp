#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	long long n,m;
	long long tmp;
	long long add;
	while(cin>>n>>m){
		add=0;
		if(n>m){		//µª®×¬°1 
			n=1;
			m=0;
		}else if(n<0){
			n*=-1;
			add=n;
			m+=(n+1)*n/2;
			n=0;
		}else{
			tmp=(double)n/2*(n-1);
			m+=tmp;
		}
		
		cout<<ceil(sqrt((double)m*2+1)+0.5)-n+add<<endl;
		
	}
	return 0;
}

