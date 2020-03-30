#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n,m,a,temp;
	int tt=1;
	while(scanf("%d %d %d",&n,&m,&a)){
		if(n==0 && m==0 && a==0){
			break;
		}
		int c[n];
		for(int i=0;i<n;i++){
			scanf("%d",&c[i]);
		}
		bool t[n]={false};
		int now=0,max=0;
		for(int i=0;i<m;i++){
			scanf("%d",&temp);
			if(t[temp-1]){
				t[temp-1]=false;
				now-=c[temp-1];
			}
			else{
				t[temp-1]=true;
				now+=c[temp-1];
			}
			if(now>max){
				max=now;
			}
		}
		printf("Sequence %d\n",tt++);
		if(max>a){
			printf("Fuse was blown.\n\n");
		}
		else{
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n\n",max);
		}
	}	
	return 0;
}
