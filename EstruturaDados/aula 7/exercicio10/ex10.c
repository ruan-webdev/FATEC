#include <stdio.h>

int bsearch(int x,int v[],int p,int u){
	
	if(p>u){
		return 0;
	}

	int m=p+u/2;
	if(x==v[m]) return 1;
	else if(x>v[m]) 
		return bsearch(x,v,p+1,u);
	else return bsearch(x,v,p,u-1);
	
}

int main(void){
	int v[8]={19,27,31,48,52,66,75,80};
	printf("27: %d\n",bsearch(27,v,0,8));
	printf("51: %d\n",bsearch(51,v,0,8));
	return 0;
}
