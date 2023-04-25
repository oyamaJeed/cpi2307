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
	ST_EXER	st_val 		= {'C','D',"Good evening!"};
	ST_EXER *st_val_p 	= &st_val;

	printf("*** Init ****\n");
	printf("struct from=%c\n", st_val_p->from);
	printf("struct to=%c\n", st_val_p->to);
	printf("struct msg=%s\n",st_val_p->msg);
	
	st_val_p->from	='E';
	st_val_p->to		='F';
	
	char newmsg[]="This is an apple!";
	
	size_t str_l=strlen(st_val.msg);
	if(str_l<strlen(newmsg))
	{
		str_l=strlen(newmsg);
	}
	for(int i=0;i<str_l;i++){
		st_val_p->msg[i]=newmsg[i];
	}
	
	printf("\n*** Modify ****\n");
	printf("struct from=%c\n", st_val.from);
	printf("struct to=%c\n", st_val.to);
	printf("struct msg=%s\n",st_val.msg);
	

	return 0;
}
