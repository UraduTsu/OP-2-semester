#pragma once
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct moreinfo {
	char vnzname[15];
	char cityname[15];
	int lvlakr;
};
struct info {
	int fakultnum;
	int students[100];
	moreinfo moremoreinfo;
};
void inpt(char);	//ввід інформації
void otpt();		//вивід інформації для 1 структури
void otpt2();		//вивід інформації для 2 структури
void maxstud();		//визначення факультету з найбільшою кількістю студентів
void newf();		//запис ВНЗ з 3 і 4 рівнем акредитації у новий файл