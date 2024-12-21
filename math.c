#include"trace.h"

int somma(int uno, int due){
    #ifdef DEBUG
    TRACE();
    #endif
    return uno + due;
}

int differenza(int uno, int due){
    #ifdef DEBUG
    TRACE();
    #endif
    return uno - due;
}

int moltiplicazione(int uno, int due){
    #ifdef DEBUG
    TRACE();
    #endif
    return uno * due;
}

float divisione(float dividendo, float divisore){
    #ifdef DEBUG
    TRACE();
    #endif
    return dividendo / divisore;
}