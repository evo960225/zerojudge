#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	
	int i,dx;
	string s;
	while(cin>>s){
		dx=s.length();
		for(i=0;i<=dx/2;++i){
			if(s[i]!=s[dx-i-1])break;
		}
		if(i>dx/2)
			cout<<"yes";
		else
			cout<<"no";
		cout<<endl;
	}
	
	return 0;
}

