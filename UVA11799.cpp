#include <iostream>

using namespace std;

int main(){
	int t,n,ans,temp;
	int tt=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		ans=0;
		for(int i=0;i<n;i++){
			scanf("%d",&temp);
			if(temp>ans){
				ans=temp;
			}
		}
		printf("Case %d: %d\n",tt++,ans);
	}
	return 0;
}
