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
int *work_lvl = NULL;

//���࠭����
void save_data(){
	//�������� ��⥬� ��࠭����...
	puts("\n�����࠭���\n");
	home();
}

//���� ������⥪�
void learn_menu(int selected){
	int r;
	switch (selected){
		case 0:
			r = rand() % 16;
			enthusiasm = enthusiasm + r;
			r = rand() % 6;
			fatigue = fatigue + r;
			puts("\n�� ����� ����!\n");
			home();
			break;
			
		case 1:
			r = rand() % 16;
			fatigue = fatigue + r;
			lvl[0]++;
			puts("\n�஢��� ������ FASM ����襭!\n");
			home();
			break;
			
		case 2:
			r = rand() % 26;
			fatigue = fatigue + r;
			lvl[1]++;
			puts("\n�஢��� ������ C ����襭!\n");
			home();
			break;
			
		case 3:
			r = rand() % 36;
			fatigue = fatigue + r;
			lvl[2]++;
			puts("\n�஢��� ������ C++ ����襭!\n");
			home();
			break;
			
		case 4:
			r = rand() % 36;
			fatigue = fatigue + r;
			lvl[3]++;
			puts("\n�஢��� ������ C-- ����襭!\n");
			home();
			break;
			
		case 5:
			r = rand() % 36;
			fatigue = fatigue + r;
			lvl[4]++;
			puts("\n�஢��� ������ Pascal ����襭!\n");
			home();
			break;
			
		case 9:
			home();
			break;
			
		default:
			puts("\n��� ⠪��� ��ਠ��!\n");
			input();
			learn_menu(user_select);
			break;
	}
}

//���� ���ᮢ � ����
void learn(){
	puts("\n\n\t\t|||������⥪�|||\n\n");
	puts("������⥪� - ��஬��� �࠭���� ������. ����� ��� ���� ���୥�(����� �� ࠡ�⠥� ����).\n");
	puts("\n����⢨�:\n\t0 ����� ������ 䠭��⨪�\n\t1 ���� FASM");
	puts("\n\t2 ���� C\n\t3 ���� C++\n\t4 ���� C--\n\t5 ���� Pascal\n\t9 �����");
	input();
	learn_menu(user_select);
}

void work(){
	//
}

//���� ����
void home_menu(int selected){
	int r;
	//srand();
	switch (selected){
		case 0:
			r = rand() % 11;
			hp = hp - r;
			r = rand() % 11;
			enthusiasm = enthusiasm - r;
			r = rand() % 21;
			fatigue = fatigue + r;
			home();
			break;
		case 1:
			learn();
			break;
		case 2:
			if (work_lvl !=0){
				work();
			}else{
				puts("\n� ��� ��� ࠡ���!\n");
				home();
			}
			break;
		case 3:
			hp = hp + 25;
			fatigue = 0;
			puts("\n�� ᢥ�� � ����� ᨫ!\n");
			break;
		case 4:
			save_data();
			home();
			break;
		case 9:
			puts("��室");
			break;
			
		default:
			puts("\n��� ⠪��� ��ਠ��!");
			input();
			home_menu(user_select);
			break;
	}
}

//���
void home(){
	puts("\n\t\t|||���|||\n\n");
	//���� �������� ���ᠭ�� � ������ ����樨
	puts("���, ���� ���... ����� �� ���뢠�� ᢮� ������������ �������. � ��� ��⭮ � ⥯��.\n");
	printf("\t���஢�: %d ������: %d\n", hp, money);
	printf("\t���㧨���: %d ��⠫����: %d", enthusiasm, fatigue);
	printf("\n������:\n\tFASM %d\tC %d", lvl[0], lvl[1]);
	printf("\n\tC++ %d\tC-- %d\n\tPascal %d\n", lvl[2], lvl[3], lvl[4]);
	puts("\n����⢨�:\n\t0 �������� �஥�⮬\n\t1 ������\n\t2 �������\n\t3 �⤮����\n\t4 ���࠭�����\n\t9 ���");
	if ( hp > 1 && enthusiasm > 1 && fatigue < 99 ){
		input();
		home_menu(user_select);
	}else{
		puts("\n\n\t�������� �� ������ � ����...\n");
	}
}

//���� ���짮��⥫�
void input(){
	puts("\n\n>");
	scanf("%d", &user_select);
}

//� ���
void info(){
	puts("\n\t\t|||�� ���|||\n\n");
	//��� �㦭� �������� ��-�
}