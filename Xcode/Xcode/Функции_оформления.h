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
using namespace std;


void statusBAr(string act, string health, string popularity)
{
    cout << "\n       " << act << "       Здоровье: " << health << "       Известность: " << popularity << endl;
}

#endif /* _STYLESHEET_h */
