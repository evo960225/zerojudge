#include<iostream>
using namespace std;

int main(){
	
	int n,a,b;
	long long c;
	cin>>n;
	for(;n>0;--n){
		cin>>a>>b>>c;
		switch (a){
			case 1:
				cout<<b+c;
				break;
			case 2:
				cout<<b-c;
				break;
			case 3:
				cout<<b*c;
				break;
			case 4:
				cout<<b/c;
				break;
		}
		cout<<endl;
	}
	return 0;
}

