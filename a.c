#include<stdlib.h>
#include<stdio.h> 
int main()
{
	char *acc="9264";
	FILE *f = fopen(acc,"r+");
if(f==NULL)
	printf("error");
	}