#include<iostream>
#include<cstdio>
using namespace std;

int main(){

	int x,y;
	int i,j;
	while(cin>>y>>x){
		int arr[y][x];
		for(i=0;i<y;++i)
			for(j=0;j<x;++j)
				cin>>arr[i][j];
		for(i=0;i<x;++i){
			for(j=0;j<y;++j)
				cout<<arr[j][i]<<" ";
			cout<<endl;
		}
		
	}
	return 0;
}

