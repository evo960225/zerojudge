#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int sti;
	int a,b,c,d;
	cin>>sti;
	for(int i=0;i<sti;i++){
		cin>>a>>b>>c>>d;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
		if(a-b==c-d)
			cout<<d+d-c<<endl;
		else if(a/b==c/d)
			cout<<d*d/c<<endl;
	}
	return 0;
}

