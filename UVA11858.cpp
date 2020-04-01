#include <cstdio>
#include <iostream>

using namespace std;

int a[1000001];
int x[500001];
int y[500001];

long long ans;

void merge(int* a,int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
	for(int i=0;i<=n2;i++){
		y[i]=a[m+1+i];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(x[i]<=y[j]){
			a[k++]=x[i++];
		}
		else{
			a[k++]=y[j++];
			ans+=m+1-i-l;
		}
	}
	while(i<n1){
		a[k++]=x[i++];
	}
	while(j<n2){
		a[k++]=y[j++];
	}
}

void mergesort(int* a,int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		ans=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		mergesort(a,0,n-1);
		printf("%lld\n",ans);
	}
	return 0;
}


