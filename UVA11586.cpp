#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	char c[500];
	int m,f,t;
	scanf("%d",&t);
	gets(c);
	while(t--){
		m=0;
		f=0;
		gets(c);
		for(int i=0;c[i];i++){
			if(c[i]=='M'){
				m++;
			}
			else if(c[i]=='F'){
				f++;
			}	
		}
		if(m==f && m!=1){
			printf("LOOP\n");
		}
		else{
			printf("NO LOOP\n");
		}
	}
	
	return 0;
}
