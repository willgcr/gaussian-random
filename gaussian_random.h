/*

Generates a random number from a gaussian distribution
This uses a Box-Muller Transform to generate the Gaussian distribution from
Uniformly distributed numbers

For more information take a look at 
https://en.wikipedia.org/wiki/Normal_distribution

This is free and unencumbered software released.
Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

Willian Gabriel Cerqueira da Rocha
hello[at]willgcr[dot]me
https://wgrocha.github.io

*/

#ifndef GAUSSIAN_RANDOM

#define GAUSSIAN_RANDOM

#include <math.h>
#include <stdlib.h>

long double g_rand (long double mi, long double sigma);

#endif
