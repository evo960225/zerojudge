#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n,ans;
	while(cin>>n){
		if(n<=10)
			ans=n*6;
		else if(n<=20)
			ans=60+(n-10)*2;
		else if (n<=40)
			ans=80+(n-20);
		else
			ans=100;
		cout<<ans<<endl;
	}
	return 0;
}

