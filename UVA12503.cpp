#include <iostream>

using namespace std;

int main(){
	int t,n,p,k;
	char s[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int ins[n];
		p=0;
		for(int i=0;i<n;i++){
			scanf("%s",&s);
			if(s[0]=='L'){
				ins[i]=-1;
			}
			else if(s[0]=='R'){
				ins[i]=1;
			}
			else if(s[0]=='S'){
				scanf("%*s %d",&k);
				ins[i]=ins[k-1];
			}
			p+=ins[i];
		}
		printf("%d\n",p);
	}
	return 0;
}
