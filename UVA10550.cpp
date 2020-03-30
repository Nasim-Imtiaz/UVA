#include <iostream>

using namespace std;

int main(){
	int s,a1,a2,a3,ans;
	while(scanf("%d %d %d %d",&s,&a1,&a2,&a3)){
		if(s||a1||a2||a3){
			ans=1080; 
			ans+=((s-a1+40)%40+(a2-a1+40)%40+(a2-a3+40)%40)*9;
			printf("%d\n",ans);
		}
		else{
			break;
		}
	}
	return 0;
}
