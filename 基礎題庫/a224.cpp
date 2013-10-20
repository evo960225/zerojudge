#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string st;
	int tmp[26];
	int i,tag;
	while(cin>>st){
		memset(tmp,0,sizeof(int)*26);
		tag=0;
		for(i=0;i<st.size();++i){
			if(st[i]>64 && st[i]<91){
				++tmp[st[i]-65];
			}else if(st[i]>96 && st[i]<123){
				++tmp[st[i]-97];
			}	
		}
		for(i=0;i<26;++i){
			if(tmp[i]%2==1)++tag ;
		}
		if(tag>1)
			cout<<"no..."<<endl;
		else		
			cout<<"yes !"<<endl;
	}
	return 0;
}

