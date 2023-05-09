#include<stdio.h>
#include<string.h>



#define ARY_MAX 3

char **get_modify_str_ary(size_t len, char ary1[][8])
{
	char add_str[][3]={"e","e","a"};
	for(int i=0;i<len;i++){
		strcat(ary1[i],add_str[i]);
		// printf("[%d]:%s\n",i,ary1[i]);
	}
}

int main(int argc,char *argv[])
{
	char inp_ary1[][8]={"Appl","Orang","Banan"};
	for(int i=0;i<ARY_MAX;i++)
	{
		printf("Before str ary[%d]=%s\n",i,inp_ary1[i]);
	}

	get_modify_str_ary(ARY_MAX,inp_ary1);

	printf("------------------------------\n");
	
	for(int i=0;i<ARY_MAX;i++)
	{
		printf("After str ary[%d] =%s\n",i,inp_ary1[i]);
	}

	return 0;
}