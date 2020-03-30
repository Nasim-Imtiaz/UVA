#include <cstdio>
#include <iostream>
#include <map>

using namespace std;

int main(){
	int n,m,p,q,cnt;
	string s;
	char c[5];
	bool ans=true;
	while(scanf("%d",&n),n){
		ans=true;
		scanf("%d",&m);
		map<string,bool> mp;
		for(int i=0;i<n;i++){
			scanf("%s",&c);
			s=c;
			mp[s]=true;
		}
		for(int i=0;i<m;i++){
			cnt=0;
			scanf("%d %d",&p,&q);
			for(int j=0;j<p;j++){
				scanf("%s",&c);
				s=c;
				if(mp[s]){
					cnt++;
				}
			}
			if(cnt<q){
				ans=false;
			}
		}
		if(ans){
			printf("yes\n");
		}	
		else{
			printf("no\n");
		}
	}
	return 0;
}
