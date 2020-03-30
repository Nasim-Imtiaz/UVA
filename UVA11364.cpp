#include <iostream>

using namespace std;

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a;
		int max=0,min=100;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			if(a>max){
				max=a;
			}
			if(a<min){
				min=a;
			}
		}
		printf("%d\n",(max-min)*2);
	}
	return 0;
}
