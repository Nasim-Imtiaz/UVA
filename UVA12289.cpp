#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	char a[100];
	string s;
	scanf("%d",&t);
	while(t--){
		scanf("%s",&a);
		s=a;
		if(s.length()==3){
			if(s[0]=='t' && s[1]=='w'){
				printf("2\n");
			}
			else if(s[0]=='t' && s[2]=='o'){
				printf("2\n");
			}
			else if(s[1]=='w' && s[2]=='o'){
				printf("2\n");
			}
			else{
				printf("1\n");
			}
		}
		else{
			printf("3\n");
		}
	}	
	return 0;
}
