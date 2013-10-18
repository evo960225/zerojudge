#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	
	int n;
	int i,j;
	bool er;
	char r[9][9],c[9][9],g[9][9];
	
	for(;;){
		memset(c,0,sizeof(char)*81);
		memset(r,0,sizeof(char)*81);
		memset(g,0,sizeof(char)*81);
		
		er=false;
		for(i=0;i<9;++i){
			for(j=0;j<9;++j){
				if(!(cin>>n))return 0;
				if(((int)(c[n-1][j]))!=1)
					c[n-1][j]=1;
				else
					er=true;	
				if(r[n-1][i]!=1)
					r[n-1][i]=1;
				else				
					er=true;
				if((g[n-1][i/3*3+j/3])!=1)
					g[n-1][i/3*3+j/3]=1;
				else
					er=true;
			}
		}
		if(!er)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	
	return 0;
}

