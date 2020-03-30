#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char c[1000001],cm;
	int n,p,q;
	bool valid;
	int tt=1;
	while(scanf("%s %d",c,&n)==2){
		printf("Case %d:\n",tt++);
		for(int i=0;i<n;i++){
			valid = true;
			scanf("%d %d",&p,&q);
			if(p>q){
				cm=c[q];
				for(int i=q+1;i<=p;i++){
					if(cm!=c[i]){
						valid=false;
						break;
					}	
				}
			}
			else{
				cm=c[p];
				for(int i=p+1;i<=q;i++){
					if(cm!=c[i]){
						valid=false;
						break;
					}
				}
			}
			if(valid){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
	}
	return 0;
}
