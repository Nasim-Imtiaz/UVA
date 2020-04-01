#include <cstdio>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){	
	int n,amt,per;
	int tt=1;
	while(scanf("%d",&n)!=EOF){
		map<string,int> mp;
		vector<string> vec;
		string s;
		char c[100];
		for(int i=0;i<n;i++){
			scanf("%s",&c);
			s=c;
			vec.push_back(s);
			mp[s]=0;
		}
		for(int i=0;i<n;i++){
			scanf("%s %d %d",&c,&amt,&per);
			if(per==0){
				continue;
			}
			s=c;
			mp[s]-=amt;
			mp[s]+=amt%per;
			for(int i=0;i<per;i++){
				scanf("%s",&c);
				s=c;
				mp[s]+=amt/per;	
			}
		}
		if(tt++>1){
			printf("\n");
		}
		for(int i=0;i<n;i++){
			printf("%s %d\n",vec[i].c_str(),mp[vec[i]]);
		}
	}
	return 0;
}
