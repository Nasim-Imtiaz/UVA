#include <iostream>

using namespace std;

int main(){
	int n,numberofone,t;
	int c=1;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		numberofone=0;
		for(int i=0;i<n;i++){
			scanf("%d",&t);
			if(t!=0){
				numberofone++;
			}
		}
		printf("Case %d: %d\n",c++,numberofone-(n-numberofone));
	}
	return 0;
}
