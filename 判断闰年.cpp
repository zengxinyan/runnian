#include <stdio.h>
int main(){
	int x;
	printf("����һ����ݣ�"); 
	scanf ("%d",&x);
	if (x%100==0&&x%400==0)
		printf("%d������",x);
	else if (x%4==0)
	        printf("%d������",x);
	     else printf("%d��������",x); 
	return 0;
}
