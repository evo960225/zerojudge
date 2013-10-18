#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){

	
	int i,k=0,sum,tmp;
	int trr[26];
	string st;
	memset(trr,0,sizeof(int)*26);
	for(i=0;i<26;++i){
		if(i==8||i==14||i==22)k+=1;
		trr[i]=(int)(10+i-k);
	}
	trr[8]=34;trr[14]=35;trr[22]=32;trr[25]=33;
	
	while(cin>>st){
		sum=0;
		tmp=trr[st[0]-65];
		sum+=tmp/10+(tmp%10)*9;
		for(i=1;i<9;++i)
			sum+=(st[i]-48)*(9-i);
		sum+=st[9]-48;
		if(sum%10==0)
			cout<<"real"<<endl;
		else
			cout<<"fake"<<endl;
	}
	return 0;
}

