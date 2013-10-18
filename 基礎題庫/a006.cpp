#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	
	int x,y,z;
	int tmp;
	while(cin>>x>>y>>z){
		tmp=y*y-4*x*z;
		if(tmp<0)
			cout<<"No real root"<<endl;
		else{
			if(tmp==0)
				cout<<"Two same roots x="<<-y/2/x;
			else{
				tmp=sqrt(tmp);
				cout<<"Two different roots x1="<<(-y+tmp)/2/x<<" , x2="<<(-y-tmp)/2/x;
			}
			cout<<endl;
		}
	}
	return 0;
}

