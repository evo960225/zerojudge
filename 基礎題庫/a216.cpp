#include<iostream>
using namespace std;

int main(){
	int n,i;
	long long f,g;
	while(cin>>n){
		f=0;g=0;
		for(i=1;i<=n;++i){
			f+=i;
			g+=f;
		}
		cout<<f<<" "<<g<<endl; 
	}
	return 0;
}

