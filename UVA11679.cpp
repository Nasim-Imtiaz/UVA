#include <iostream>

using namespace std;

int main(){
	int b,n,temp,c,d,v;
	while(scanf("%d %d",&b,&n)){
		if(b==0 && n==0){
			break;
		}
		int bank[b];
		for(int i=0;i<b;i++){
			scanf("%d",&temp);
			bank[i]=temp;
		}
		for(int i=0;i<n;i++){
			scanf("%d %d %d",&d,&c,&v);
			bank[d-1]-=v;
			bank[c-1]+=v;
		}
		bool answer=true;
		for(int i=0;i<b;i++){
			if(bank[i]<0){
				answer=false;
				break;
			}
		}
		if(answer){
			printf("S\n");
		}
		else{
			printf("N\n");
		}
	}
	return 0;
}
