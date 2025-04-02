#ifndef iostream
#include<iostream>
#endif

/** @brief returns divided%divisor */
int modder(int divided, int divisor){
    int res = ((divided^divisor)>>31? divisor : ~divisor + 1);
    while(abs(divided) >= abs(divisor)){
        divided += res;
    }
    return divided;
}