#include <iostream>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int count=0;
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					count++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n",count);
	}
	return 0;
}
