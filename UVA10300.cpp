#include <iostream>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a,b,c;
		scanf("%d",&n);
		int ans=0;
		while(n--){
			scanf("%d %d %d",&a,&b,&c);
			ans+=a*c;
		}
		printf("%d\n",ans);
	}
	return 0;
}
