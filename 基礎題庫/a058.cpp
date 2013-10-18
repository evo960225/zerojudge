#include<iostream>
using namespace std;

int main(){
	int sti,n,i;
	int a[3];
	cin>>sti;
	a[0]=0;a[1]=0;a[2]=0;
	for(i=0;i<sti;++i){
		cin>>n;
		if(n%3==0)++a[0];
		else if(n%3==1)++a[1];
		else if(n%3==2)++a[2];
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2];
	return 0;
}

