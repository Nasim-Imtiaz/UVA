#include <iostream>

using namespace std;

int main(){
	char a[100];
	string s;
	int t=1;
	while(scanf("%s",&a)){
		s=a;
		if(s=="*"){
			break;
		}
		if(s[0]=='H'){
			printf("Case %d: Hajj-e-Akbar\n",t++);
		}
		else{
			printf("Case %d: Hajj-e-Asghar\n",t++);
		}
	}
}
