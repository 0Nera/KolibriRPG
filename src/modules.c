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
int *work_lvl = NULL;

//Сохранение
void save_data(){
	//Добавить систему сохранений...
	puts("\nНеСохранено\n");
	home();
}

//Меню библиотеки
void learn_menu(int selected){
	int r;
	switch (selected){
		case 0:
			r = rand() % 16;
			enthusiasm = enthusiasm + r;
			r = rand() % 6;
			fatigue = fatigue + r;
			puts("\nВы полны идей!\n");
			home();
			break;
			
		case 1:
			r = rand() % 16;
			fatigue = fatigue + r;
			lvl[0]++;
			puts("\nУровень знаний FASM повышен!\n");
			home();
			break;
			
		case 2:
			r = rand() % 26;
			fatigue = fatigue + r;
			lvl[1]++;
			puts("\nУровень знаний C повышен!\n");
			home();
			break;
			
		case 3:
			r = rand() % 36;
			fatigue = fatigue + r;
			lvl[2]++;
			puts("\nУровень знаний C++ повышен!\n");
			home();
			break;
			
		case 4:
			r = rand() % 36;
			fatigue = fatigue + r;
			lvl[3]++;
			puts("\nУровень знаний C-- повышен!\n");
			home();
			break;
			
		case 5:
			r = rand() % 36;
			fatigue = fatigue + r;
			lvl[4]++;
			puts("\nУровень знаний Pascal повышен!\n");
			home();
			break;
			
		case 9:
			home();
			break;
			
		default:
			puts("\nНет такого варианта!\n");
			input();
			learn_menu(user_select);
			break;
	}
}

//Меню курсов и книг
void learn(){
	puts("\n\n\t\t|||Библиотека|||\n\n");
	puts("Библиотека - огромное хранилище знаний. Также тут есть интернет(который не работает дома).\n");
	puts("\nДействия:\n\t0 Читать научную фантастику\n\t1 Учить FASM");
	puts("\n\t2 Учить C\n\t3 Учить C++\n\t4 Учить C--\n\t5 Учить Pascal\n\t9 Домой");
	input();
	learn_menu(user_select);
}

void work(){
	//
}

//Меню дома
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
				puts("\nУ Вас нет работы!\n");
				home();
			}
			break;
		case 3:
			hp = hp + 25;
			fatigue = 0;
			puts("\nВы свежи и полны сил!\n");
			break;
		case 4:
			save_data();
			home();
			break;
		case 9:
			puts("Выход");
			break;
			
		default:
			puts("\nНет такого варианта!");
			input();
			home_menu(user_select);
			break;
	}
}

//Дом
void home(){
	puts("\n\t\t|||Дом|||\n\n");
	//Надо добавить описание к каждой локации
	puts("Дом, милый дом... Домом Вы называете свою однокомнатную квартиру. В ней уютно и тепло.\n");
	printf("\tЗдоровье: %d Баланс: %d\n", hp, money);
	printf("\tЭнтузиазм: %d Усталость: %d", enthusiasm, fatigue);
	printf("\nЗнания:\n\tFASM %d\tC %d", lvl[0], lvl[1]);
	printf("\n\tC++ %d\tC-- %d\n\tPascal %d\n", lvl[2], lvl[3], lvl[4]);
	puts("\nДействия:\n\t0 Заняться проектом\n\t1 Учиться\n\t2 Работать\n\t3 Отдохнуть\n\t4 Сохраниться\n\t9 Выйти");
	if ( hp > 1 && enthusiasm > 1 && fatigue < 99 ){
		input();
		home_menu(user_select);
	}else{
		puts("\n\n\tСожалеем Вы попали в кому...\n");
	}
}

//Ввод пользователя
void input(){
	puts("\n\n>");
	scanf("%d", &user_select);
}

//О игре
void info(){
	puts("\n\t\t|||Об игре|||\n\n");
	//Тут нужно добавить что-то
}