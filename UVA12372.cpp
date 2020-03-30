#include <iostream>

using namespace std;

int main(){
	int t,temp;
	bool ans;
	scanf("%d",&t);
	int c=1;
	while(t--){
		ans=false;
		for(int i=0;i<3;i++){
			scanf("%d",&temp);
			if(temp>20){
				ans=true;
			}
		}
		if(ans){
			printf("Case %d: bad\n",c++);
		}
		else{
			printf("Case %d: good\n",c++);
		}
	}
	return 0;
}
