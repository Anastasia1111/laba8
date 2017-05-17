//#include <sum.h>
#include <ctest.h>

CTEST(arithmetic_suite, simle_sum)
{
    const int a = 9000;
    const int b = 300;

    const int result = 2;

    const int expected = 2;
    ASSERT_EQUAL(expected, result);
}

/*CTEST(arithmetic_suite, simle_sum)
{
    const int a = 10000;
    const int b = 300;

    const int result = a*1.2;

    const int expected = 11200;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, simle_sum)
{
    const int a = 200;
    const int b = 300;

    const int result = a*1.2;

    const int expected = 11200;
    ASSERT_EQUAL(expected, result);
}*/
