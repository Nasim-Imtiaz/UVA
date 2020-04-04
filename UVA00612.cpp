#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortval(const pair<string,int> &a,const pair<string,int> &b){
	return a.second<b.second;
}

int main(){
	int t,l,n;
	int tt=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&l,&n);
		string s[n];
		char a[100];
		vector<pair<string,int>> vec;
		for(int i=0;i<n;i++){
			scanf("%s",a);
			s[i]=a;
			int count=0;
			for(int k=0;k<l-1;k++){
				for(int j=0;j<l-k-1;j++){
					if(a[j]>a[j+1]){
						swap(a[j],a[j+1]);
						count++;
					}
				}
			}
			vec.push_back(make_pair(s[i],count));
		}
		stable_sort(vec.begin(),vec.end(),sortval);
		if(tt>1){
			printf("\n");
		}
		for(int i=0;i<vec.size();i++){
			printf("%s\n",vec[i].first.c_str());
		}
		tt++;
	}
	return 0;
}
