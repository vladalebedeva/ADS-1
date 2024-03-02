// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value > 1) {
    for (uint64_t n = 2; n * n <= value; n++)
        if (value % n == 0)
            return false;
    return true;
  }
else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    uint64_t count = 0;
    int val = 1;
    while (count < n) {
        val++;
        if (checkPrime(val))
            count++;
    }
    return val;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    uint64_t c = value + 1;
    while (!checkPrime(c)) {
        c++;
    }
    return c;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    uint64_t sum = 0;
    uint64_t prime = 2;
    for (uint64_t n = 1; prime < hbound; n++) {
        sum += prime;
        prime = nextPrime(n);
    }
    return sum;
}
