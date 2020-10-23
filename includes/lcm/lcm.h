// lcm.h
// A function that provides the lowest common multiple(Lcm)
// Copyright 2020 bmyjacks
// GCD header file needs to be introduced

#ifndef _TINYTOOLS_LCM_H_
#define _TINYTOOLS_LCM_H_


// lcm
#include <iostream>

int gcd(int firstNeedGcdInteger, int lastNeedGcdInteger)
{
    return (firstNeedGcdInteger % lastNeedGcdInteger) ? gcd(lastNeedGcdInteger, firstNeedGcdInteger % lastNeedGcdInteger) : lastNeedGcdInteger;
}

int lcm(int firstNeedLcmInteger, int lastNeedLcmInteger)
{
    return (firstNeedLcmInteger * lastNeedLcmInteger) / gcd(firstNeedLcmInteger, lastNeedLcmInteger);
}


#endif
