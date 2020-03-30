#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n,p,m,target;
	int tt=1;
	char c[100];
	string s,ans;
	float min,amnt;
	while(scanf("%d %d",&n,&p),(n||p)){
		if(tt>1){
			printf("\n");
		}
		gets(c);
		target=0;
		min=100000000;
		for(int i=0;i<n;i++){
			gets(c);
		}
		for(int i=0;i<p;i++){
			gets(c);
			s=c;
			scanf("%f %d",&amnt,&m);
			gets(c);
			for(int j=0;j<m;j++){
				gets(c);
			}
			if(m>target){
				target=m;
				min=amnt;
				ans=s;
			}
			else if(m==target){
				if(amnt<min){
					min=amnt;
					ans=s;
				}
			}
		}
		printf("RFP #%d\n",tt++);
		printf("%s\n",ans.c_str());
	}
	return 0;
}
