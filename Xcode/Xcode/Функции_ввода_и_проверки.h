//
//  Функции_ввода_и_проверки.h
//  Xcode
//
//  Created by TwoDollarsEsq on 12/23/17.
//  Copyright © 2017 TwoDollarsEsq. All rights reserved.
//

#ifndef INPUTER
#define INPUTER
#include "math.h"
#include <sstream>

bool isInt(string body, double *adres, string name){//Функция для проверки типа входных данных. Если значение является строкой, проверка не пройдена.
    *adres = atof(body.c_str());//Преобразование строки, которую ввёл пользователь, в double и последующая инициализация переменной с адресом adres этим значением
    double temp = *adres;
    int length = int(body.length());
    
    ostringstream oss;//Указатель строкового потока
    oss << temp;
    string bodyS = oss.str();//Преобразованная double —> string
    
    if ( (temp == 0 && body.length() != 0 && body != "0" && body != "-0") || (length > bodyS.length())) {//Условие, при котором значение является строкоподобным
        cout << "\n" << name << " не может быть строкой.\n\n";
        return false;
    } else if (temp != floor(temp)) {
        cout << "\n" << name << " не может быть вещественным числом.\n\n";
        return false;
    } else if (temp < 0){
        cout << "\n" << name << " не может быть негативным числом.\n\n";
        return false;
    } else {
        return true;
    }
    
}

int inputer(string name){//Функция для получения int
    string bodY;//Переменная для первичных(непроверенных данных)
    cout << name << " "; cin >> bodY;//Передача управления пользователю для ввода bodY
    double adreS;
    bool condtition = isInt(bodY, &adreS, name);//Первая проверка
    
    
    while (!condtition) {//Этот цикл добъётся того, чтобы по окончанию его работы переменной с адресом *adreS было присвоено значение типа int
        cout << name << " "; cin >> bodY;
        condtition = isInt(bodY, &adreS, name);
    }
    //code = bodY;
    return adreS;
}


#endif /* INPUTER.h */
