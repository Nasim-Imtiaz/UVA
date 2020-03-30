#include <iostream>

using namespace std;

int main(){
	int n,ans;
	char c[100];
	scanf("%d",&n);
	string a[n];
	string s[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	ans=n/16;
	if(n%16!=0){
		ans++;
	}
	for(int i=0;i<n;i++){
		scanf("%s",&c);
		a[i]=c;
	}
	int temp=0;
	while(ans--){
		for(int i=0;i<16;i++){
			printf("%s: %s\n",a[temp++].c_str(),s[i].c_str());
			if(temp==n){
				temp=0;
			}
		}
	}
	return 0;
}
