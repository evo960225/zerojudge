#include<iostream>
#include<string>
#include<cmath>
using namespace std;

string roman="IVXLCDM";
int romanNum[]={1,5,10,50,100,500,1000};

int Instr(string st,char ch){
	for(int i=0 ; i<st.length() ; ++i){
		if(st[i]==ch) return i;
	}
}

int ToNum(string n){
	int sum=0,sTmp=0,s=0;
	for(int i=n.length()-1;i>=0;--i){
		s=Instr(roman,n[i]);
		if (sTmp<=s)
			sum+=romanNum[Instr(roman,n[i])];
		else
			sum-=romanNum[Instr(roman,n[i])];
		sTmp=s;
	}
	return sum;
}

string ToRoman(int n){
	string ro;
	for(int i=0;n!=0;++i){
		if(n%10==4)
			ro=roman.substr(i*2,2)+ro;
		else if(n%10==9)
			ro=roman.substr(i*2,1)+roman.substr(i*2+2,1)+ro;
		else{
			for(int j=0;j<n%5;++j){
				ro=roman[i*2]+ro;
			}
			if(n%10>=5)
				ro=roman[i*2+1]+ro;
		}
		n/=10;
	}
	return ro;
}

int main(){

	string a,b;
	int sum;
	while(true){
		cin>>a;
		if(a=="#") return 0;
			cin>>b;
		sum=abs((double)ToNum(a)-ToNum(b));
		if(sum!=0)
			cout<<ToRoman(sum)<<endl;
		else
			cout<<"ZERO"<<endl;
	}
}

