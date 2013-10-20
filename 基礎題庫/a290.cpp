#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

	short arr[800][800];
	short tmp[1000000];
	

int main(){

	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);

	int n,m;
	int a,b;
	int qa,qb;
	int x;
	
	while(cin>>n>>m){
		memset(arr,sizeof(arr),0);
		for(;m>0;--m){
			cin>>a>>b;
			arr[a-1][b-1]=1; 
		} 
		
		cin>>a>>b;
		
		tmp[0]=a-1;
		qa=1;qb=0;
		while(qa!=qb){
			x=tmp[qb];
			++qb;
			if(x==b-1)break;
			for(int i=0;i<n;++i){
				if(arr[x][i]==1){
					arr[x][i]=-1;
					tmp[qa]=i;
					++qa;
				}
			}
		}
		if(x==b-1)cout<<"Yes!!!"<<endl;
		else cout<<"No!!!!"<<endl;
		
	}
	return 0;
}

