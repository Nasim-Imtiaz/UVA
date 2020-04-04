#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

bool openingBracket(char c){
	if(c=='(' || c=='[' || c=='{' || c=='<'){
		return true;
	}
	return false;
}

bool closingBracket(char c){
	if(c==')' || c==']' || c=='}' || c=='>'){
		return true;
	}
	return false;
}

int main(){
	char s[3001];
	bool print;
	int ans;
	while(gets(s)){
		stack<char> st;
		print = true;
		ans = 0;
		for(int i=0;s[i];i++){
			ans++;
			if(openingBracket(s[i])){
				st.push(s[i]);
				if(s[i]=='(' && s[i+1]=='*'){
					st.push(s[i+1]);
					i++;
				}
			}
			else if(closingBracket(s[i])){
				if(s[i]==')'){
					if(!st.empty() && st.top()=='('){
						st.pop();
					}
					else{
						print = false;
						break;
					}
				}
				else if(s[i]==']'){
					if(!st.empty() && st.top()=='['){
						st.pop();
					}
					else{
						print = false;
						break;
					}
				}
				else if(s[i]=='}'){
					if(!st.empty() && st.top()=='{'){
						st.pop();
					}
					else{
						print = false;
						break;
					}
				}
				else if(s[i]=='>'){
					if(!st.empty() && st.top()=='<'){
						st.pop();
					}
					else{
						print = false;
						break;
					}
				}
			}
			else if(s[i]=='*'){
				if(s[i+1]==')'){
					if(!st.empty() && st.top()=='*'){
						i++;
						st.pop();
						st.pop();
					}
					else{
						print = false;
						break;
					}
				}
			}
		}
		if(print && st.empty()){
			printf("YES\n");
		}
		else if(print){
			ans++;
			printf("NO %d\n",ans);
		}
		else{
			printf("NO %d\n",ans);
		}
	}
	return 0;
}
