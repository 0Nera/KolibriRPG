// ������祭�� ������⥪
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

//#include <console.h>
#include <errno.h>
#include <stdlib.h>

//���������� 䠩��
#include "settings.h"
#include "modules.h"

//��६����
	//����� ���짮��⥫�: ���஢�, ������ � �㡫��, ��㧨���, ��⠫����, �롮�(��� ����)
	int hp, money, enthusiasm, fatigue, user_select;
	
	//�஢��� ������: fasm, �, c++, c--, pascal
	int start_lvl[5] = {0, 1, 0, 0, 1 };
	
	//�஢��� ������: fasm, �, c++, c--, pascal
	int lvl[5];

//�����
void play() {
	hp = start_hp;
	money = start_money;
	enthusiasm = start_enthusiasm;
	fatigue = start_fatigue;
	for (int i=0; i!= sizeof(start_lvl) / sizeof(int)+1; i++){
		lvl[i]=start_lvl[i];
	}
	home();
}

//����
void menu(int selected){
	switch (selected){
		case 0:
			//clrscr();
			//con_cls();
			//system("clear");
			play();
			break;
		case 3:
			info();
			scanf("%d", &user_select);
			menu(user_select);
			break;
			
		case 9:
			puts("��室");
			break;
			
		default:
			puts("\n��� ⠪��� ��ਠ��!");
			input();
			menu(user_select);
			break;
	}
}

//��砫� �ணࠬ��
int main() {
	//char *tempp;
	//printf(tempp);
	puts("\t\tKolibriRPG v0.1\n\n");
	puts("����:\n");
	puts("\t0 �����\n");
	puts("\t9 ��室");
	input();
	menu(user_select);
	
	getchar();getchar();getchar();
	puts("\n\t***�����***\t\n");
	return 0;
}