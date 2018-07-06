#include "gaussian_random.h"

long double g_rand (long double mi, long double sigma) {
    long double v1, v2, s, result;
    v1 = ((long double) rand() / (RAND_MAX)) * 2 - 1;
    v2 = ((long double) rand() / (RAND_MAX)) * 2 - 1;
    s = v1*v1 + v2*v2;
    if (s == 0 || s >= 1) return g_rand (mi, sigma);
    result = v1*sqrt(-2.0*log(s)/s);
    return (mi+result*sigma);
}
