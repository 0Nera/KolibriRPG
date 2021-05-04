#ifndef MODULES_H
#define MODULES_H
extern int hp; 
extern int money; 
extern int enthusiasm; 
extern int fatigue; 
extern int user_select; 
extern int lvl[5]; 


//Меню дома
void home_menu(int selected);

//Дом
void home();

//Ввод пользователя
void input();

//О игре
void info();
#endif
