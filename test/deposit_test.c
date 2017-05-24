//#include <sum.h>
#include <ctest.h>

CTEST(arithmetic_suite, sum10000u300)
{
    // Given
    const int a = 10000;
    const int b = 300;
    const int result = a*1.12;

    // Then
    const int expected = 11200;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite1, simle_sum10000u200)
{
    // Given
    const int a = 10000;
    const int b = 200;

    // When
    const int result = a*1.06;

    // Then
    const int expected = 10600;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite2, simle_sum10000u100)
{
    // Given
    const int a = 10000;
    const int b = 100;

    // When
    const int result = a*1.02;

    // Then
    const int expected = 10200;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite3, simle_sum10000u000)
{
    // Given
    const int a = 10000;
    const int b = 0;

    // When
    const int result = a*0.9;

    // Then
    const int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite4, sum100000u300)
{
    // Given
    const int a = 100000;
    const int b = 300;

    // When
    const int result = a*1.15;

    // Then
    const int expected = 115000-1;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite5, simle_sum100000u200)
{
    // Given
    const int a = 100000;
    const int b = 200;

    // When
    const int result = a*1.08;

    // Then
    const int expected = 108000;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite6, simle_sum100000u100)
{
    // Given
    const int a = 100000;
    const int b = 100;

    // When
    const int result = a*1.03;

    // Then
    const int expected = 103000;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite7, simle_sum100000u00)
{
    // Given
    const int a = 100000;
    const int b = 00;

    // When
    const int result = a*0.9;

    // Then
    const int expected = 90000;
    ASSERT_EQUAL(expected, result);
}
