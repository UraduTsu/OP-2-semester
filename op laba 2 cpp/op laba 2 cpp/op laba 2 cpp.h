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
void inpt(char);	//��� ����������
void otpt();		//���� ���������� ��� 1 ���������
void otpt2();		//���� ���������� ��� 2 ���������
void maxstud();		//���������� ���������� � ��������� ������� ��������
void newf();		//����� ��� � 3 � 4 ����� ����������� � ����� ����