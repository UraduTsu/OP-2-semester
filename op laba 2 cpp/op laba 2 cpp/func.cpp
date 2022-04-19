#include "op laba 2 cpp.h"
using namespace std;
void inpt(char sym) {
	ofstream filein;
	char s2 = ' ';
	info vnz;
	if (sym == ' ') {
		filein.open("file1.txt", ios::binary);						//������� ���� � ����� ������
	}
	else
		filein.open("file1.txt", ios::binary|ios::app);				//� ����� �����������
	do {
		cout << "Enter name of vnz: "; cin >> vnz.moremoreinfo.vnzname;				//
		cout << "Enter city: "; cin >> vnz.moremoreinfo.cityname;					//
		cout << "Enter level of akreditation: "; cin >> vnz.moremoreinfo.lvlakr;	//
		cout << "Enter number of fakultets: "; cin >> vnz.fakultnum;				//
		for (int i = 0; i < vnz.fakultnum; i++) {									//��� ���������� ��� ���
			cout << "Enter number of students on " << i + 1 << " fakultet: \n";
			cin >> vnz.students[i];
		}
		filein.write((char*)&vnz, sizeof(info));					//����� ��������� � ����������� � ����
		cout << "\nIf you want to continue writing type + : "; cin >> s2;	//��������� �������� ����� ���
		cin.ignore();
	} while (s2 == '+');
	filein.close();
}

void otpt() {
	ifstream fileout("file1.txt", ios::binary);		//�������� ����� � ����� �������
	info vnz;
	while (fileout.read((char*)&vnz, sizeof(info))) {	//������� �����
		printf("\nName of vnz: %-21s City: %-16s Level of akreditation: %i Number of fakultets: %4i",	//������������ ���� ���������� � �������
			vnz.moremoreinfo.vnzname,
			vnz.moremoreinfo.cityname,
			vnz.moremoreinfo.lvlakr,
			vnz.fakultnum);
		for (int i = 0; i < vnz.fakultnum; i++) {
			printf("\nNumber of students in %3i fakultet: %5i", i + 1, vnz.students[i]);
		}
	}
	fileout.close();
}

void otpt2() {																				//���������
	ifstream fileout("file2.txt", ios::binary);
	moreinfo vnz;
	while (fileout.read((char*)&vnz, sizeof(moreinfo)))
		printf("\nName of vnz: %-21s City: %-16s Level of akreditation: %i", vnz.vnzname, vnz.cityname, vnz.lvlakr);
	fileout.close();
}

void maxstud() {
	info vnz;
	int faknum = 0, studnum = 0;
	string vnzname, city;
	cout << "\nEnter city you want to check: "; cin >> city;
	ifstream fileout("file1.txt", ios::binary);					//�������� ����� � ����� �������
	while (fileout.read((char*)&vnz, sizeof(info))) {
		if (vnz.moremoreinfo.cityname == city) {
			for (int i = 0; i < vnz.fakultnum; i++) {
				if (vnz.students[i] > studnum) {					//����������� �������� ������� ��������
					vnzname = vnz.moremoreinfo.vnzname;				//����� ������ ����������, ����� ��� �� ������� ��������
					faknum = i + 1;
					studnum = vnz.students[i];
				}
			}
		}
	}
	cout << "\n\nThe most number of students is on " << faknum << " fakultet in " << vnzname << " vnz: " << studnum << " students\n";
	fileout.close();
}

void newf() {
	info vnz;
	moreinfo morevnz;
	ifstream fileout("file1.txt", ios::binary);		//�������� �����1 � ����� �������
	ofstream filein("file2.txt", ios::binary);		//�������� �����2 � ����� ������
	while (fileout.read((char*)&vnz, sizeof(info))) {	//������� �����
		if (vnz.moremoreinfo.lvlakr > 2) {			//����������� ��� � 3 � 4 ����� �����������
			morevnz = vnz.moremoreinfo;				
			filein.write((char*)&morevnz, sizeof(moreinfo));		//����� ��� � ����2
		}
	}
	filein.close();
	fileout.close();
}