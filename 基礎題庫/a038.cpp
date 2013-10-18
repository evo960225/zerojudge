#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;

int main(){	
	int i;
	string st,ans;
	while(cin>>st){
		ans="";
		for(i=st.size()-1;st[i]=='0' && i>0;--i) ;
		for(;i>=0;--i)ans+=st[i];
		cout<<ans<<endl;
	}
	return 0;
}

