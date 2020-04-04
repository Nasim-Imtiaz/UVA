#include <iostream>

using namespace std;

int main(){
	int t;
	string s;
	char c[1000];
	scanf("%d",&t);
	while(t--){
		scanf("%s",&c);
		s=c;
		if(s.length()==1 || s.length()==2){
			printf("+\n");
		}
		else if(s[s.length()-1]=='5'){
			printf("-\n");
		}
		else if(s[0]=='9'){
			printf("*\n");
		}
		else{
			printf("?\n");
		}
	}
	return 0;
}
