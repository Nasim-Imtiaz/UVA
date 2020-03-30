#include <iostream>
#include <cstdio>

using namespace std;

int onedigit(int x){
	
	
}

int main(){
	char s[26];
	int ft,sd;
	while(gets(s)){
		ft=0;
		sd=0;
		for(int i=0;s[i];i++){
			if(s[i]>='a' && s[i]<='z'){
				ft+=s[i]-'a'+1;
			}
			else if(s[i]>='A' && s[i]<='Z'){
				ft+=s[i]-'A'+1;
			}
		}
		gets(s);
		for(int i=0;s[i];i++){
			if(s[i]>='a' && s[i]<='z'){
				sd+=s[i]-'a'+1;
			}
			else if(s[i]>='A' && s[i]<='Z'){
				sd+=s[i]-'A'+1;
			}
		}
		int temp;
		while(ft>9){
			temp=0;
			while(ft>0){
				temp+=ft%10;
				ft/=10;
			}
			ft=temp;
		}
		while(sd>9){
			temp=0;
			while(sd>0){
				temp+=sd%10;
				sd/=10;
			}
			sd=temp;
		}
		if(ft>sd){
			printf("%.2f %\n",(double)sd/ft*100);
		}
		else{
			printf("%.2f %\n",(double)ft/sd*100);
		}
	}

	return 0;
}
