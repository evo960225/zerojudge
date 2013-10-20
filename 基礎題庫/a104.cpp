#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int n[1000],le;
	int i,j;
	int tmp;
	while(cin>>le){
		for(i=0;i<le;++i)
			cin>>n[i];
		for(i=0;i<le-1;++i){
			for(j=0;j<le-i-1;++j){
				if(n[j]>n[j+1]){
					tmp=n[j];n[j]=n[j+1];n[j+1]=tmp ;
				}
			}
		}
		for(i=0;i<le;++i)
			cout<<n[i]<<" ";
		cout<<endl;
	}
	return 0;
}

