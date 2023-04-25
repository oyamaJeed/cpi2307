#include <stdio.h>

#ifndef USER_COM_ENA
	#define USER_COM_ENA
#endif

#include "exer_com.h"

size_t strlen(const char * str){
	size_t len=0;
	while(*str!='\0'){
		len++;
		str++;
	}
	return len;
}

int main(int argv, char *argc[])
{
	ST_EXER	st_val[2] = {	{'1','2',"Good morning!"},
							{'3','4',"Good afternoon!"}};
	ST_EXER *st_val_p[2] = {&st_val[0],&st_val[1]};

	printf("*** Init ****\n");
	for (int i=0;i<2;i++)
	{
		printf("struct from=%c\n", st_val_p[i]->from);
		printf("struct to=%c\n", st_val_p[i]->to);
		printf("struct msg=%s\n",st_val_p[i]->msg);
	}
	
	st_val_p[1]->from	='A';
	st_val_p[1]->to		='B';
	
	char str[]="This is a pen!";
	
	for(int i=0;i<strlen(st_val[1].msg);i++){
		st_val_p[1]->msg[i]	=str[i];
	}
	

	printf("\n*** Modify ****\n");
	for (int i=0;i<2;i++)
	{
		printf("struct from=%c\n", st_val[i].from);
		printf("struct to=%c\n", st_val[i].to);
		printf("struct msg=%s\n",st_val[i].msg);
	}

	return 0;
}
