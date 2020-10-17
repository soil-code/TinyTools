#include <iostream>
#include "../../includes/gcd/gcd.h"
using namespace std;

int main()
{
    int testA = 25, testB = 30;
    int testAns = gcd(testA, testB);

    if (testAns == 5)
    {
        cout << "GCD test passed!" << endl;
        return 0;
    }else
    {
        cout << "GCD test failed!" << endl;
        return -1;
    }
}
