#include <QtTest/QTest>
#include "tst_passing.h"

void tst_Passing::testSomething()
{
    int val = 5;
    QCOMPARE(val, 5);
}

