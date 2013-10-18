#include<iostream>
#include<string>
using namespace std;

int main(){
	int i,k=0,sum;
	string st;
	string trr="JVXKLYAMWBNZCIPDOQERFSGTHU";//3-7(JVX),2-8(KLY),1-9(AMW),0-0(BNZ),9-1(CPI),8-2(DQO),7-3(ER),6-4(FS),5-5(GT),4-6(HU) 
	while(cin>>st){
		sum=st[8]-48;
		for(i=0;i<8;++i)
			sum+=(st[i]-48)*(8-i);
		sum+=3;
		
		if(sum%10<6)
			cout<<trr.substr(sum%10*3,3);
		else
			cout<<trr.substr((sum%10-6)*2+18,2);
		cout<<endl;
	}
	return 0;
}

