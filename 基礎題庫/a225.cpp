#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	int n,i,j;
	int arr[1000];
	int tmp;
	while(cin>>n){
		//***input***//
		for(i=0;i<n;++i){
			cin>>arr[i]	;
		}
		for(i=0;i<n;++i){
			for(j=0;j<n-i-1;++j){
				if(arr[j]%10>arr[j+1]%10){
					tmp=arr[j];arr[j]=arr[j+1];arr[j+1]=tmp;
				}else if(arr[j]%10==arr[j+1]%10){
					if(arr[j]<arr[j+1]){
						tmp=arr[j];arr[j]=arr[j+1];arr[j+1]=tmp;
					}
				}
			}
		}
		for(i=0;i<n;++i){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

