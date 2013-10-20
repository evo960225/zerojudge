#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	
	int n,sum;
	while(scanf("%d",&n)==1){
		if(n==0)break;
		sum=0;
		while(n%2==1){
			++sum;
			n>>=1;
		}
		printf("%d\n",sum);
	}
	return 0;
}

