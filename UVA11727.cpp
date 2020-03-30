#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t,a[3];
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[j]);
		}
		sort(a,a+3);
		printf("Case %d: %d\n",i,a[1]);
	}
	return 0;
}
