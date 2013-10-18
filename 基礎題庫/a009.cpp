#include<iostream>
#include<cstdio>
#include<string> 
using namespace std;

int main(){
	string st;
	while(cin>>st){
		for(int i=0;i<st.length();i++){
			st[i]-=7;
		}
		cout<<st<<endl;
	}
	return 0;
}

