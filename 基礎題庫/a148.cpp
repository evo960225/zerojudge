#include<iostream>
#include<cstdio>
using namespace std;

int main(){

	int count,i,tmp,point;
	while(cin>>count){
		point=0;
		for(i=0;i<count;++i){
			cin>>tmp;
			point+=tmp;
		}
		if((double)point/count>59) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
	return 0;
}

