#pragma once

#include <stdio.h>
#include <stdlib.h>

/*
* Header seeker
* --------------
*		Searches "Portable Executable" header. 
*	Returns address of the header. 
*/
void* hdseek(FILE &file);

/*
* Header Rewrite function
* -------------------------
*		Rewrites value by the given address.
*/
void hdwrite(FILE &file);
