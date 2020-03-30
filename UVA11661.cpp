#include <iostream>

using namespace std;

int main(){
	int n,ans,lastD,lastR,temp;
	char c[2000001];
	while(scanf("%d",&n),n){
		scanf("%s",c);
		ans=n;
		lastD=-n;
		lastR=-n;
		for(int i=0;i<n;i++){
			if(c[i]=='Z'){
				ans=0;
				break;
			}
			else if(c[i]=='R'){
				temp=i-lastD;
				lastR=i;
				if(temp<ans){
					ans=temp;
				}
			}
			else if(c[i]=='D'){
				temp=i-lastR;
				lastD=i;
				if(temp<ans){
					ans=temp;
				}
			}
			
		}
		printf("%d\n",ans);
	}
	return 0;
}
