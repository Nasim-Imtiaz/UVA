#include <iostream>

using namespace std;

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int ans = 0;
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
	return 0;
}
