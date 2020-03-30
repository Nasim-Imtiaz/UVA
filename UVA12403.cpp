#include <iostream>

using namespace std;

int main(){
	int t,temp,amount=0;
	char a[100];
	string s;
	scanf("%d",&t);
	while(t--){
		scanf("%s",&a);
		s=a;
		if(s[0]=='d'){
			scanf("%d",&temp);
			amount+=temp;
		}
		else{
			printf("%d\n",amount);
		}
	}
	return 0;
}
