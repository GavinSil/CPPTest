/*
 * main.c
 *
 *  Created on: 2016年7月5日
 *      Author: root
 */
#include <stdarg.h>
#include <stdio.h>
#include "../inc/pub.h"

ULONG add(ULONG ulNum, ...)
{
    ULONG ulRes = 0;
    va_list lstArg;

    va_start(lstArg, ulNum);
    for(int i=0; i < ulNum; i++)
    {
        ulRes += va_arg(lstArg, ULONG);
    }
    va_end(lstArg);

    return ulRes;
}
