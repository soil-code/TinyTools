// gcd.h
// A function that provides the greatest common factor(Gcd)
// Copyright 2020 bmyjacks

#ifndef _TINYTOOLS_GCD_H_
#define _TINYTOOLS_GCD_H_

// gcd
#include <iostream>

int gcd(int firstNeedGcdInteger, int lastNeedGcdInteger)
{
    return firstNeedGcdInteger % lastNeedGcdInteger ? gcd(lastNeedGcdInteger, firstNeedGcdInteger % lastNeedGcdInteger) : lastNeedGcdInteger;
}


#endif
