// Подключение библиотек
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

//#include <console.h>
#include <errno.h>
#include <stdlib.h>

//Заголовочные файлы
#include "settings.h"
#include "modules.h"

//Переменные
	//Данные пользователя: здоровье, баланс в рублях, энтузиазм, усталость, выбор(для меню)
	int hp, money, enthusiasm, fatigue, user_select;
	
	//Уровень знаний: fasm, си, c++, c--, pascal
	int start_lvl[5] = {0, 1, 0, 0, 1 };
	
	//Уровень знаний: fasm, си, c++, c--, pascal
	int lvl[5];

//Запуск
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

//Меню
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
			puts("Выход");
			break;
			
		default:
			puts("\nНет такого варианта!");
			input();
			menu(user_select);
			break;
	}
}

//Начало программы
int main() {
	//char *tempp;
	//printf(tempp);
	puts("\t\tKolibriRPG v0.1\n\n");
	puts("Меню:\n");
	puts("\t0 Играть\n");
	puts("\t9 Выход");
	input();
	menu(user_select);
	
	getchar();getchar();getchar();
	puts("\n\t***Конец***\t\n");
	return 0;
}