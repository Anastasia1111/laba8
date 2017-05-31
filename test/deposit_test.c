#include "deposit.h"
#include <ctest.h>

CTEST(arithmetic_suite, simle10a0)
{
	
    const int result = RE(10000,0);

    const int expected = 9000 ;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, simle10a100)
{
    const int result = RE(10000,100);

    const int expected = 10200;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, simle10a200)
{
    const int result = RE(10000,200);

    const int expected = 10600;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, simle10a300)
{
    const int result = RE(10000,300);

    const int expected = 11200;
    ASSERT_EQUAL(expected, result);
}


CTEST(arithmetic_suite, simle100a0)
{
    const int result = RE(100000,0);

    const int expected = 90000;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, simle100a100)
{
    const int result = RE(100000,100);

    const int expected = 103000;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, simle100a200)
{
    const int result = RE(100000,200);

    const int expected = 108000;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, simle100a300)
{
    const int result = RE(100000,300);

    const int expected = 115000;
    ASSERT_EQUAL(expected, result);
}

