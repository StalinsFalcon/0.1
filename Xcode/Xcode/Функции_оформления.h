//
//  Функции_оформления.h
//  Xcode
//
//  Created by TwoDollarsEsq on 10/29/17.
//  Copyright © 2017 TwoDollarsEsq. All rights reserved.
//

#ifndef _STYLESHEET_h
#define _STYLESHEET_h
#include <string>
#include <thread>
#include <chrono>
using namespace std; using namespace this_thread;using namespace chrono;

void titleShow(string act, string title){
    cout << endl;
    system("clear");
    cout << "                            " << act << "\n                           " << title << endl;
}

void statusBAr(string act, string health, string popularity)
{
    cout << endl;
    system("clear");
    cout << "       " << act << "       Здоровье: " << health << "       Известность: " << popularity << endl;
}

void contentPrint(string body){
    for (int i = 0; i < body.size(); i++) {
        cout << body [i];
        sleep_for(milliseconds(25));//Обычная скорость повествования — 25
        fflush(stdout);
    }
}

void actionsPrint(string body){
    cout << endl;
    
    for (int i = 0; i < body.size(); i++) {
        cout << body [i];
        sleep_for(milliseconds(15));//Обычная скорость повествования — 15
        fflush(stdout);
    }
}

void dialogPrint(string body, string who){
    cout << endl;
    cout << who << endl;
    body = "— " + body;
    for (int i = 0; i < body.size(); i++) {
        cout << body [i];
        sleep_for(milliseconds(25));//Обычная скорость повествования — 25
        fflush(stdout);
    }
    sleep_for(milliseconds(1800));
    cout << endl;
}

void NL(){
    cout << endl;
    fflush(stdout);
}

#endif /* _STYLESHEET_h */
