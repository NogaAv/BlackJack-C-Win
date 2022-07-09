#ifndef __BLACK_JACK_H__
#define __BLACK_JACK_H__
/*
 * Author: Noga Avraham
 * Description: Header for the "Black Jack" game. 
 * Language:  C
 * Date: July 2021
*/
#include <stddef.h> //size_T

#define FAIL -1
#define SUCCESS 0


//Call this function to start playing.
//Returns: error int number FAIL in case of fail, otherwise returns SUCCESS.
int play();

#endif //__BLACK_JACK_H__
