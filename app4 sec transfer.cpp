#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
    int second=0;
    printf("�п�J����\n");
	printf("����:");
    scanf("%d",&second);
    printf("%d:%d:%d",second/3600%60,second/60%60,second%60);
}

