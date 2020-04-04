#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int h,d;
	float u,f;
	while(scanf("%d %f %d %f",&h,&u,&d,&f)){
		if(h==0){
			break;
		}
		f=u*(f/100);
		int day=1;
		float now=0;
		while(1){
			now+=u;
			if(now>h){
				printf("success on day %d\n",day);
				break;
			}
			now-=d;
			u-=f;
			if(u<0){
				u=0;
			}
			if(now<0){
				printf("failure on day %d\n",day);
				break;
			}	
			day++;
		}	
	}
	return 0;
}
