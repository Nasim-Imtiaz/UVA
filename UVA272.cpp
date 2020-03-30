#include <iostream>

using namespace std;

int main(){
	char c[100];
	bool b = true;
	while(gets(c)){
		for(int i=0;c[i];i++){
			if(c[i]=='\"'){
				if(b){
					printf("``");
					b=false;
				}
				else{
					printf("''");
					b=true;
				}	
			}	
			else{
				printf("%c",c[i]);
			}	
		}
		printf("\n");
	}
	return 0;
}
