#include <iostream>

using namespace std;

int main(){
	int t,mile,juice,n,temp;
	int c=1;
	scanf("%d",&t);
	while(t--){
		mile=0;
		juice=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&temp);
			temp++;
			mile+=(temp/30);
			juice+=(temp/60);
			if((temp%30)>0){
				mile++;
			}
			if((temp%60)>0){
				juice++;
			}
		}
		mile*=10;
		juice*=15;
		if(mile==juice){
			printf("Case %d: Mile Juice %d\n",c++,mile);
		}
		else if(mile<juice){
			printf("Case %d: Mile %d\n",c++,mile);
		}
		else{
			printf("Case %d: Juice %d\n",c++,juice);
		}
	}
	return 0;
}
