#include <iostream>

using namespace std;

int main(){
	int t,n,temp1,temp2;
	scanf("%d",&t);
	int tt=1;
	while(t--){
		scanf("%d %d",&n,&temp1);
		int up=0, down=0;
		for(int i=0;i<n-1;i++){
			scanf("%d",&temp2);
			if(temp2>temp1){
				up++;
			}
			else if(temp2<temp1){
				down++;
			}
			temp1=temp2;
		}
		printf("Case %d: %d %d\n",tt++,up,down);
	}
	return 0;
}
