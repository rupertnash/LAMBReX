#ifndef LAMBREX_H
#define LAMBREX_H

#include "Lamb.h"

Lamb * lambrexInit(int, int, int, double, double);
void lambrexFinalize(Lamb *);

#endif