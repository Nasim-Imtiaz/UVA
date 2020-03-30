#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int h,w,ans,temp;
	while(scanf("%d",&h)){
		if(h==0){
			break;
		}
		scanf("%d",&w);
		int a[w];
		scanf("%d",&a[0]);
		ans=h-a[0];
		for(int i=1;i<w;i++){
			scanf("%d",&a[i]);
			if(a[i]!=h){
				temp=a[i-1]-a[i];
				if(temp>0){
					ans+=temp;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
