#include <iostream>

using namespace std;

int main(){
	int t,n,a,b,d;
	bool answer;
	scanf("%d",&t);
	while(t--){
		d=101;
		answer=true;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			if(d==101){
				d=a-b;
			}
			else{
				if(d!=(a-b)){
					answer=false;
				}
			}
		}
		if(answer){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}	
		if(t){
			printf("\n");
		}
	}
}
