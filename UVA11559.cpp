#include <iostream>

using namespace std;

int main(){
	int n,b,h,w,price,answer,temp;
	while(scanf("%d %d %d %d",&n,&b,&h,&w)==4){
		answer=b+1; 
		for(int i=0;i<h;i++){
			scanf("%d",&price);
			for(int j=0;j<w;j++){
				scanf("%d",&temp);
				if(temp>=n){
					if((price*n)<answer){
						answer=price*n;
					}
				}
			}
		}
		if(answer>b){
			printf("stay home\n");
		}
		else{
			printf("%d\n",answer);
		}
	}
	return 0;
}
