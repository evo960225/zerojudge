#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	string st;
	int i,sum,ti;
	while(cin>>ti){
		for(;ti>0;--ti){
			cin>>st;
			sum=1;
			for(i=0;i<st.size();++i){
				sum*=st[i]-48;
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}

