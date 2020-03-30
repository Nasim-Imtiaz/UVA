#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool valsort(const pair<string,int> &a,const pair<string,int> &b){
	return a.second>b.second;
}

int main(){
	int t,n;
	string s;
	int c=1;
	char ch[101];
	scanf("%d",&t);
	while(t--){
		vector<pair<string,int>> vec;
		for(int i=0;i<10;i++){
			scanf("%s %d",&ch,&n);
			s=ch;
			vec.push_back(make_pair(s,n));
		}
		sort(vec.begin(),vec.end(),valsort);
		n=vec[0].second;
		printf("Case #%d:\n",c++);
		for(int i=0;i<10;i++){
			if(n==vec[i].second){
				printf("%s\n",vec[i].first.c_str());
			}
			else{
				break;
			}
		}
	}
	return 0;
}
