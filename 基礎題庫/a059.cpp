#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int sti,i,ii;
	int n,m;
	int sum;
	cin>>sti;
	for(ii=0;ii<sti;++ii){
		cin>>n>>m;
		sum=0;
		for(i=pow(n-1,0.5)+1;i*i<=m;++i)
			sum+=i*i;
		cout<<"Case "<<ii+1<<": "<<sum<<endl;
	}	
	return 0;
}

