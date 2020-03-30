#include <iostream>

using namespace std;

int main(){
	int a,b,ans;
	while(scanf("%d %d",&a,&b)){
		if(a==-1 && b==-1){
			break;
		}
		ans=min(((b-a+100)%100),((a-b+100)%100));
		printf("%d\n",ans);
	}
	return 0;
}
