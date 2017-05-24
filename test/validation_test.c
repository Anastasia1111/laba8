//#include <sum.h>
#include <ctest.h>
#include "deposit.h"

CTEST(Validf, sum0)
{
    const int result = checksum(0);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validf, sum1)
{
    const int result = checksum(12222);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validf, date0)
{
    const int result = checkdate(500);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validf, date1)
{
    const int result = checkdate(300);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validf, and00)
{
    const int result = and(100,200,300);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validf, and01)
{
    const int result = and(200,300,100);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validf, and02)
{
    const int result = and(300,100,200);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Validf, and1)
{
    const int result = and(200,100,300);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}



