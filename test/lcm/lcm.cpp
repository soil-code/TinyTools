#include <iostream>
#include "../../includes/lcm/lcm.h"
using namespace std;

int main()
{
    int testA = 25, testB = 30;
    int testAns = lcm(testA, testB);

    if (testAns == 150)
    {
        cout << "LCM test passed!" << endl;
        return 0;
    }
    else
    {
        cout << "LCM test failed!" << endl;
        return -1;
    }
}
