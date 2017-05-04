#include <iostream>

#include "../thirdparty/ctest.h"
#include "../src/deposit.cpp"

CTEST(FinalAmount, zero_test)
{
    int a = 100;
    int b = 1;
    int expected = a*0.9 ;
    int result = FinalAmount(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountWhisPercent1, one_test)
{
    int a = 100;
    int b = 2;
    int expected = a + a*0.03;
    int result = AmountWhisPercent1(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountWhisPercent2, two_test)
{
    int a = 100;
    int b = 1;
    int expected = a + a*0.06;
    int result = AmountWhisPercent2(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(AmountWhisPercent3, three_test)
{
    int a = 100;
    int b = 2;
    int expected = a + a*0.15;
    int result = AmountWhisPercent3(b,a);
    ASSERT_EQUAL(expected, result);
}
