#include <iostream>

using namespace std;

int main(){
	int t,temp1,temp2;
	scanf("%d",&t);
	int tt=1;
	bool ans;
	while(t--){
		scanf("%d %d",&temp1,&temp2);
		ans=true;
		if(temp1>temp2){
			for(int i=0;i<8;i++){
				temp1=temp2;
				scanf("%d",&temp2);
				if(temp1<temp2){
					ans=false;
				}
			}
		}
		else{
			for(int i=0;i<8;i++){
				temp1=temp2;
				scanf("%d",&temp2);
				if(temp1>temp2){
					ans=false;
				}
			}
		}
		if(tt==1){
			printf("Lumberjacks:\n");
			tt++;
		}
		if(ans){
			printf("Ordered\n");
		}
		else{
			printf("Unordered\n");
		}	
	}
	return 0;
}
