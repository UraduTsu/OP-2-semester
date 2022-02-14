#include <iostream>
#include <fstream>
#include <string>
#include "op 2.1.h"
using namespace std;

void inpt(string filee1) {                      //����� ����� � ������ ����
    string s;                                   //�����, ���� �������� � ����
    ofstream file1(filee1);
    bool flag = true;                           //�������� ������� ���� �����
    char symbol = 19;                           //Ctrl + S - ������ ���������� �����
    while (flag) {                              //���������� ���� �� ������� ������ ���������� �����
        getline(cin, s);                        //����� ����� �����
        if (s.find(symbol) != string::npos) {   //����� � ����� Ctrl + S
            flag = false;
            s.erase(s.find(symbol), 1);         //��������� �������
        }
        if (!s.empty())                         //����� ����� � ����, ���� ����� �� ������
            file1 << s << endl;
    }
    file1.close();                              //�������� �����
}

void otpt(string filee) {                       //���� ����� ������� ����� � �������
    cout << endl;
    string s;                                   //����� ��� �����'���������� �����
    ifstream file(filee);
    while (!file.eof()) {                       //�������� �� ����� �����
        getline(file, s);                       //����������� ����� � �����
        cout << s << endl;                      //���� ����� � �������
    }
    file.close();                               //�������� �����
}

void newf(string filee1, string filee2) {
    string s, snew;                             //������� ����
    int k = 1;                                  //˳�������
    ifstream file1(filee1);
    ofstream file2(filee2);
    while (!file1.eof()) {                      //�������� �� ����� �����
        getline(file1, s);                      //������� ����� � ������� ����� � ����� � �����
        if (s != "") {                          //����������� ������� �����
            snew = to_string(s.size()) + " " + s + " " + to_string(k);      //��������� ������ �����
            k++;                                //��������� ���������
            file2 << snew << endl;              //����� ������ ����� � ������ ����
        }
    }
    file1.close();
    file2.close();
}

void app(string f) {                            //����������� ����� � ����� ������� �����
    ofstream file(f, ios::app);
    string s;                                   //�����, ���� �������� � ����
    bool flag = true;                           //�������� ������� ���� �����
    char symbol = 19;                           //Ctrl + S - ������ ���������� �����
    while (flag) {                              //���������� ���� �� ������� ������ ���������� �����
        getline(cin, s);                        //����� ����� �����
        if (s.find(symbol) != string::npos) {   //����� � ����� Ctrl + S
            flag = false;
            s.erase(s.find(symbol), 1);         //��������� �������
        }
        if (!s.empty())                         //����� ����� � ����, ���� ����� �� ������
            file << s << endl;
    }
    file.close();                               //�������� �����
}