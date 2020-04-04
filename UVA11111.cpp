#include <iostream>
#include <cstdio> 
#include <stack>
#include <cmath>

using namespace std;

int main(){
	int a,temp;
	char c;
	bool ans;
	while(scanf("%d%c",&a,&c)==2){
		ans = true;
		stack<int> st;
		stack<int> pre;	
		st.push(abs(a));
		pre.push(abs(a));
		if(a>0){
			ans= false;
		}
		while(c!='\n' && scanf("%d%c",&a,&c)==2){
			if(a<0){
				if(abs(a)>=pre.top()){
					ans = false;
				}
				else{
					temp=pre.top();
					pre.pop();
					temp-=abs(a);
					pre.push(temp);
					pre.push(abs(a));
					st.push(abs(a));
				}
			}
			else{
				if(!st.empty() && st.top()==a){
					st.pop();
					pre.pop();
				}
				else{
					ans = false;
				}
			}
		}
		if(ans && st.empty()){
			printf(":-) Matrioshka!\n");
		} 
		else{
			printf(":-( Try again.\n");
		}
	}
	return 0;
}
