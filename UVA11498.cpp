#include <iostream>

using namespace std;

int main(){
	int n,x,y,a,b;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		scanf("%d %d",&x,&y);
		while(n--){
			scanf("%d %d",&a,&b);
			if(a==x || b==y){
				printf("divisa\n");
			}
			else if(a>x && b>y){
				printf("NE\n");
			}
			else if(a>x && b<y){
				printf("SE\n");
			}
			else if(a<x && b>y){
				printf("NO\n");
			}
			else{
				printf("SO\n");
			}
		}
	}
	return 0;
}
