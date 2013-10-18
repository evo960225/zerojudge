#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	
	int stLe,s;
	bool zero,o;
	string n;
	string st;
	string d[]={"¹s","³ü","¶L","°Ñ","¸v","¥î","³°","¬m","®Ã","¨h"};
	string e[]={"¬B","¨Õ","¥a","¸U","»õ"};
	while(cin>>n){
		zero=false;st="";
		stLe= n.length();
		o=true;
		for(int i=0;i<stLe;i++){
			s=stLe-i-1;	
			if(n[i]=='0'){
			 	zero=true;
			}else{
				if(zero)
					st+=d[0];
				st+=d[n[i]-48]; 
				if(s%4!=0)
					st+=e[(s-1)%4];
				zero=false;
			} 
			if(s==8){
				st+=e[4];
			}
			else if(o && s==4 ){
				o=false;
				st+=e[3];
			}
		}
		printf("%s\n",st.c_str());
	}
	return 0;
}

