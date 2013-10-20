#include<iostream>
using namespace std;

int main(){
	
	int a,b,s;
	int i;
	while(cin>>a>>b>>s){
		cout<<a/b;
		cout<<".";
		for(i=0;i<s;++i){
			a%=b;
			a=a*10;
			cout<<a/b;
		}
			cout<<endl;
	}
	return 0;
}

