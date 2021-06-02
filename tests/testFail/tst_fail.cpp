#include <QtTest/QTest>
#include "tst_fail.h"

void tst_Fail::testSomething()
{
    int val = 3;
    QVERIFY(val > 0);
    QCOMPARE(val, 5);
}

