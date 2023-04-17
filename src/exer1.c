#include<stdio.h>

extern int cmp(char *, char *);
extern void result(int);

int main(int argc,char *argv[]){
	for(int i=0;i<argc+1;i++){			//i<argc+1 : 引数なしの場合も出したかった
		printf("arg[%d]:",i);			//現在の比較対象
		result(cmp(argv[1],argv[i]));	//比較結果	argv[1]=キーボードから入力した文字列
	}
}
