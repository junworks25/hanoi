#include<stdio.h>
#include"hanoi.h"

typedef enum{
	TERMINATE,Hanoi1
}Menu;

Menu SelectMenu(void){
	int ch;
	do
	{
		printf("(1)�n�m�C�̓��@(0)�I��");
		scanf_s("%d",&ch);

	} while (ch< TERMINATE || ch>Hanoi1);
	return (Menu)ch;
}

int main(void){
	Menu menu;
	do
	{
		switch (menu = SelectMenu())
		{
		case Hanoi1:
			hano1_main();
			break;
		}
	} while (menu != TERMINATE);
	return 0;
}