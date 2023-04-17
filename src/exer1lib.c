#include<stdio.h>
int cmp(char *argstr1, char *argstr2){
	if(argstr1==NULL||argstr2==NULL){	//引数がない
		return -2;
	}else if(argstr1==argstr2){		//引数の文字列が一致
		return 0;
	}else{					//文字列が異なる
		return -1;
	}
}

void result(int re){
	switch(re){
		case 0	:printf("入力した文字列と引数の文字列が一致しました\n");break;
		case -1	:printf("入力した文字列と引数の文字列が異なります\n");break;
		case -2	:printf("引数がありません\n");break;
		default	:break;
	}
}