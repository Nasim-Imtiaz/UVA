#include <iostream>

using namespace std;

int main(){
	int month,n,m;
	double initial,amount,p;
	while(scanf("%d %lf %lf %d",&month,&initial,&amount,&n)){
		if(month<0){
			break;
		}
		float dep[101];
		while(n--){
			scanf("%d %lf",&m,&p);
			for(int i=m;i<101;i++){	
				dep[i]=p;
			}
		}
		double currentvalue=(initial+amount)*(1-dep[0]);
		double currentloan=amount;	
		double monthly = amount/month;
		int now=0;
		while(currentvalue<currentloan){
			now++;
			currentloan-=monthly;
			currentvalue*=(1-dep[now]);
		}
		printf("%d month",now);
		if(now!=1){
			printf("s");
		}
		printf("\n");
	}
	return 0;
}
