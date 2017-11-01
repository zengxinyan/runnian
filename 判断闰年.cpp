#include <stdio.h>
int main(){
	int x;
	printf("输入一个年份："); 
	scanf ("%d",&x);
	if (x%100==0&&x%400==0)
		printf("%d是闰年",x);
	else if (x%4==0)
	        printf("%d是闰年",x);
	     else printf("%d不是闰年",x); 
	return 0;
}
