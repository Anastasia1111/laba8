//#include <sum.h>
#include <ctest.h>

CTEST(arithmetic_suite, simle_sum)
{
    // Given
    const int a = 10000;
    const int b = 300;

    // When
    const int result = a*1.12;

    // Then
    const int expected = 11200;
    ASSERT_EQUAL(expected, result);
}
