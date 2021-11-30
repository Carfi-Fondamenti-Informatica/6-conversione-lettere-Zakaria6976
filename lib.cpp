//
// Created by Utente on 30/11/2021.
//

#include "lib.h"
char conversione (char a) {
    bool t = true;
    if (a >= 97 and a <= 122) {
        return a - 32;
    }
    if (a >= 65 and a <= 90) {

        return a + 32;
    }
}
bool verifica (char a) {
    bool t = true;
    if ((a >= 97 and a <= 122) or (a >= 65 and a <= 90)) {
        return true;
    }else{
        return false;
    }

}

