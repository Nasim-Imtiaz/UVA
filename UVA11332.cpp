#include <iostream>

using namespace std;

int f(int n){
	int sum = 0;
	while(n>0){
		sum+=n%10;
		n/=10;
	} 
	return sum;
}

int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		int answer = f(n);
		while(answer>9){
			answer=f(answer);
		}
		printf("%d\n",answer);
	}
	return 0;
}
