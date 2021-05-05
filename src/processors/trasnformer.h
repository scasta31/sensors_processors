#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <Arduino.h>

template<class T>
T scaler(T inp, float scale) {
    return T(inp * scale);
}

template<class T>
T truncate(T inp, T max, T min) {
    if (inp <= min) {
        return inp;
    } 
    else if (inp >= max) {
        return max;
    }
    return inp;
}

template<class T>
T luxvalue(T in){
    return ((4200*in)/4.7);
}

template<class T>
T truncate2 (T in){
    if (in <= ((2*1023)/5)){
        return ((2*1023)/5)
    }
    else{
        return in
    }
}

template<class T>
T lightcurrent (T in){
    return ((0.065/511.5)(in-409.2))+0.97
}

template<class T>
T temperature (T in){
    return ((125/0.44)(in-0.74))-40
}

#endif