#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	string st,ans;
	int i;
	while(cin>>st){
		ans="";
		for(i=0;i<6;++i){
			ans+=abs((float)st[i]-st[i+1])+48;	
		}
		cout<<ans<<endl;
	}
	return 0;
}

