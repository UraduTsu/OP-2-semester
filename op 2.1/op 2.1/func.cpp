#include <iostream>
#include <fstream>
#include <string>
#include "op 2.1.h"
using namespace std;

void inpt(string filee1) {                      //Запис рядків у перший файл
    string s;                                   //Рядок, який пишеться у файл
    ofstream file1(filee1);
    bool flag = true;                           //Наявність символа кінця файла
    char symbol = 19;                           //Ctrl + S - символ завершення файла
    while (flag) {                              //Виконується поки не знайшло символ завершення файла
        getline(cin, s);                        //Запис рядка файла
        if (s.find(symbol) != string::npos) {   //Пошук у рядку Ctrl + S
            flag = false;
            s.erase(s.find(symbol), 1);         //Видалення символа
        }
        if (!s.empty())                         //Запис рядку у файл, якщо рядок не пустий
            file1 << s << endl;
    }
    file1.close();                              //Закриття файла
}

void otpt(string filee) {                       //Вивід вмісту першого файла у консоль
    cout << endl;
    string s;                                   //Змінна для запам'ятовування рядка
    ifstream file(filee);
    while (!file.eof()) {                       //Перевірка на кінець файла
        getline(file, s);                       //Записування рядка у змінну
        cout << s << endl;                      //Вивід рядка у консоль
    }
    file.close();                               //Закриття файла
}

void newf(string filee1, string filee2) {
    string s, snew;                             //Допоміжні змінні
    int k = 1;                                  //Лічильник
    ifstream file1(filee1);
    ofstream file2(filee2);
    while (!file1.eof()) {                      //Перевірка на кінець файла
        getline(file1, s);                      //Читання рядків з першого файла і запис у змінну
        if (s != "") {                          //Ігнорування порожніх рядків
            snew = to_string(s.size()) + " " + s + " " + to_string(k);      //Створення нового рядка
            k++;                                //Збільшення лічильника
            file2 << snew << endl;              //Запис нового рядка у другий файл
        }
    }
    file1.close();
    file2.close();
}

void app(string f) {                            //Дописування рядків у кінець першого файла
    ofstream file(f, ios::app);
    string s;                                   //Рядок, який пишеться у файл
    bool flag = true;                           //Наявність символа кінця файла
    char symbol = 19;                           //Ctrl + S - символ завершення файла
    while (flag) {                              //Виконується поки не знайшло символ завершення файла
        getline(cin, s);                        //Запис рядка файла
        if (s.find(symbol) != string::npos) {   //Пошук у рядку Ctrl + S
            flag = false;
            s.erase(s.find(symbol), 1);         //Видалення символа
        }
        if (!s.empty())                         //Запис рядку у файл, якщо рядок не пустий
            file << s << endl;
    }
    file.close();                               //Закриття файла
}