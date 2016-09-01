#include <stdlib.h>
#include <check.h>
#include "../src/roman_calc.h"

RomanCalculator* roman_calc;

void setup(void)
{
    roman_calc = roman_calc_create();
}

void teardown(void)
{
    roman_calc_free(roman_calc);
    roman_calc = NULL;
}

START_TEST(test_roman_calc_create)
{
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 0);
}
END_TEST

START_TEST(test_roman_calc_add_I_to_I)
{
    roman_calc_add(roman_calc, "I", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "II");
}
END_TEST

START_TEST(test_roman_calc_add_X_to_X)
{
    roman_calc_add(roman_calc, "X", "X");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "XX");
}
END_TEST

START_TEST(test_roman_calc_add_C_to_C)
{
    roman_calc_add(roman_calc, "C", "C");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CC");
}
END_TEST

START_TEST(test_roman_calc_add_I_to_V)
{
    roman_calc_add(roman_calc, "I", "V");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "VI");
}
END_TEST

START_TEST(test_roman_calc_add_I_to_X)
{
    roman_calc_add(roman_calc, "I", "X");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "XI");
}
END_TEST

START_TEST(test_roman_calc_add_I_to_L)
{
    roman_calc_add(roman_calc, "I", "L");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "LI");
}
END_TEST

START_TEST(test_roman_calc_add_I_to_C)
{
    roman_calc_add(roman_calc, "I", "C");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CI");
}
END_TEST

START_TEST(test_roman_calc_add_I_to_D)
{
    roman_calc_add(roman_calc, "I", "D");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DI");
}
END_TEST

START_TEST(test_roman_calc_add_I_to_M)
{
    roman_calc_add(roman_calc, "I", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MI");
}
END_TEST

START_TEST(test_roman_calc_add_V_to_I)
{
    roman_calc_add(roman_calc, "V", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "VI");
}
END_TEST

START_TEST(test_roman_calc_add_V_to_V)
{
    roman_calc_add(roman_calc, "V", "V");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 1);
    ck_assert_str_eq (roman_calc_result(roman_calc), "X");
}
END_TEST

START_TEST(test_roman_calc_add_V_to_X)
{
    roman_calc_add(roman_calc, "V", "X");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "XV");
}
END_TEST

START_TEST(test_roman_calc_add_V_to_C)
{
    roman_calc_add(roman_calc, "V", "C");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CV");
}
END_TEST

START_TEST(test_roman_calc_add_V_to_D)
{
    roman_calc_add(roman_calc, "V", "D");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DV");
}
END_TEST

START_TEST(test_roman_calc_add_V_to_M)
{
    roman_calc_add(roman_calc, "V", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MV");
}
END_TEST

START_TEST(test_roman_calc_add_X_to_I)
{
    roman_calc_add(roman_calc, "X", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "XI");
}
END_TEST

START_TEST(test_roman_calc_add_X_to_V)
{
    roman_calc_add(roman_calc, "X", "V");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "XV");
}
END_TEST

START_TEST(test_roman_calc_add_X_to_C)
{
    roman_calc_add(roman_calc, "X", "C");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CX");
}
END_TEST

START_TEST(test_roman_calc_add_X_to_D)
{
    roman_calc_add(roman_calc, "X", "D");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DX");
}
END_TEST

START_TEST(test_roman_calc_add_X_to_M)
{
    roman_calc_add(roman_calc, "X", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MX");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_I)
{
    roman_calc_add(roman_calc, "L", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "LI");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_V)
{
    roman_calc_add(roman_calc, "L", "V");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "LV");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_X)
{
    roman_calc_add(roman_calc, "L", "X");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "LX");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_L)
{
    roman_calc_add(roman_calc, "L", "L");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 1);
    ck_assert_str_eq (roman_calc_result(roman_calc), "C");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_C)
{
    roman_calc_add(roman_calc, "L", "C");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CL");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_D)
{
    roman_calc_add(roman_calc, "L", "D");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DL");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_M)
{
    roman_calc_add(roman_calc, "L", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "ML");
}
END_TEST

START_TEST(test_roman_calc_add_C_to_I)
{
    roman_calc_add(roman_calc, "C", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CI");
}
END_TEST

START_TEST(test_roman_calc_add_C_to_V)
{
    roman_calc_add(roman_calc, "C", "V");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CV");
}
END_TEST

START_TEST(test_roman_calc_add_C_to_X)
{
    roman_calc_add(roman_calc, "C", "X");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CX");
}
END_TEST

START_TEST(test_roman_calc_add_C_to_L)
{
    roman_calc_add(roman_calc, "C", "L");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CL");
}
END_TEST

START_TEST(test_roman_calc_add_C_to_D)
{
    roman_calc_add(roman_calc, "C", "D");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DC");
}
END_TEST

START_TEST(test_roman_calc_add_C_to_M)
{
    roman_calc_add(roman_calc, "C", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MC");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_I)
{
    roman_calc_add(roman_calc, "D", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DI");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_V)
{
    roman_calc_add(roman_calc, "D", "V");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DV");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_X)
{
    roman_calc_add(roman_calc, "D", "X");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DX");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_L)
{
    roman_calc_add(roman_calc, "D", "L");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DL");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_C)
{
    roman_calc_add(roman_calc, "D", "C");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "DC");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_D)
{
    roman_calc_add(roman_calc, "D", "D");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 1);
    ck_assert_str_eq (roman_calc_result(roman_calc), "M");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_M)
{
    roman_calc_add(roman_calc, "D", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MD");
}
END_TEST

START_TEST(test_roman_calc_add_M_to_I)
{
    roman_calc_add(roman_calc, "M", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MI");
}
END_TEST

START_TEST(test_roman_calc_add_M_to_V)
{
    roman_calc_add(roman_calc, "M", "V");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MV");
}
END_TEST

START_TEST(test_roman_calc_add_M_to_X)
{
    roman_calc_add(roman_calc, "M", "X");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MX");
}
END_TEST

START_TEST(test_roman_calc_add_M_to_L)
{
    roman_calc_add(roman_calc, "M", "L");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "ML");
}
END_TEST

START_TEST(test_roman_calc_add_M_to_C)
{
    roman_calc_add(roman_calc, "M", "C");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MC");
}
END_TEST

START_TEST(test_roman_calc_add_M_to_D)
{
    roman_calc_add(roman_calc, "M", "D");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MD");
}
END_TEST

START_TEST(test_roman_calc_add_M_to_M)
{
    roman_calc_add(roman_calc, "M", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MM");
}
END_TEST

START_TEST(test_roman_calc_add_II_to_I)
{
    roman_calc_add(roman_calc, "II", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 3);
    ck_assert_str_eq (roman_calc_result(roman_calc), "III");
}
END_TEST

START_TEST(test_roman_calc_add_II_to_II)
{
    roman_calc_add(roman_calc, "II", "II");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "IV");
}
END_TEST

START_TEST(test_roman_calc_add_V_to_IV)
{
    roman_calc_add(roman_calc, "V", "IV");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "IX");
}
END_TEST

START_TEST(test_roman_calc_add_XX_to_XX)
{
    roman_calc_add(roman_calc, "XX", "XX");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "XL");
}
END_TEST

START_TEST(test_roman_calc_add_L_to_XL)
{
    roman_calc_add(roman_calc, "L", "XL");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "XC");
}
END_TEST

START_TEST(test_roman_calc_add_CC_to_CC)
{
    roman_calc_add(roman_calc, "CC", "CC");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CD");
}
END_TEST

START_TEST(test_roman_calc_add_D_to_CD)
{
    roman_calc_add(roman_calc, "D", "CD");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CM");
}
END_TEST

START_TEST(test_roman_calc_add_CM_to_XLIX)
{
    roman_calc_add(roman_calc, "CM", "XLIX");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 6);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CMXLIX");
}
END_TEST

START_TEST(test_roman_calc_add_XIV_to_LX)
{
    roman_calc_add(roman_calc, "XIV", "LX");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 5);
    ck_assert_str_eq (roman_calc_result(roman_calc), "LXXIV");
}
END_TEST

START_TEST(test_roman_calc_add_MMM_to_CMXCIX)
{
    roman_calc_add(roman_calc, "MMM", "CMXCIX");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 9);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MMMCMXCIX");
}
END_TEST

START_TEST(test_roman_calc_sub_I_from_II)
{
    roman_calc_subtract(roman_calc, "II", "I");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 1);
    ck_assert_str_eq (roman_calc_result(roman_calc), "I");
}
END_TEST

START_TEST(test_roman_calc_sub_XIV_from_LXXIV)
{
    roman_calc_subtract(roman_calc, "LXXIV", "XIV");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 2);
    ck_assert_str_eq (roman_calc_result(roman_calc), "LX");
}
END_TEST

START_TEST(test_roman_calc_sub_MMM_to_MMMCMXCIX)
{
    roman_calc_subtract(roman_calc, "MMMCMXCIX", "MMM");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 6);
    ck_assert_str_eq (roman_calc_result(roman_calc), "CMXCIX");
}
END_TEST

START_TEST(test_roman_calc_lower_case_input)
{
    roman_calc_add(roman_calc, "mdclxvi", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 8);
    ck_assert_str_eq (roman_calc_result(roman_calc), "MMDCLXVI");
}
END_TEST

START_TEST(test_roman_calc_add_empty_string)
{
    roman_calc_add(roman_calc, "", "M");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 0);
}
END_TEST

START_TEST(test_roman_calc_sub_empty_string)
{
    roman_calc_subtract(roman_calc, "M", "");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 0);
}
END_TEST

START_TEST(test_roman_calc_non_roman_characters)
{
    roman_calc_add(roman_calc, "M", "IZ");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 0);
}
END_TEST

START_TEST(test_roman_calc_numerals_that_do_not_repeat)
{
    roman_calc_add(roman_calc, "M", "VV");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 0);
}
END_TEST

START_TEST(test_roman_calc_numerals_that_can_repeat)
{
    roman_calc_add(roman_calc, "M", "IIII");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 0);
}
END_TEST

START_TEST(test_roman_calc_numerals_that_can_repeat_but_should_not)
{
    roman_calc_add(roman_calc, "M", "IIV");
    ck_assert_int_eq (roman_calc_result_length(roman_calc), 0);
}
END_TEST

void addCoreTests(Suite* testSuite)
{
    TCase *tc_core = tcase_create ("Core");
    tcase_add_checked_fixture (tc_core, setup, teardown);
    tcase_add_test (tc_core, test_roman_calc_create);
    suite_add_tcase (testSuite, tc_core);
}

void addSingleCharacterAddTests(Suite* testSuite)
{
    TCase *tc_add = tcase_create ("Single Character Addition");
    tcase_add_checked_fixture (tc_add, setup, teardown);
    tcase_add_test (tc_add, test_roman_calc_add_I_to_I);
    tcase_add_test (tc_add, test_roman_calc_add_X_to_X);
    tcase_add_test (tc_add, test_roman_calc_add_C_to_C);
    tcase_add_test (tc_add, test_roman_calc_add_I_to_V);
    tcase_add_test (tc_add, test_roman_calc_add_I_to_X);
    tcase_add_test (tc_add, test_roman_calc_add_I_to_L);
    tcase_add_test (tc_add, test_roman_calc_add_I_to_C);
    tcase_add_test (tc_add, test_roman_calc_add_I_to_D);
    tcase_add_test (tc_add, test_roman_calc_add_I_to_M);
    tcase_add_test (tc_add, test_roman_calc_add_V_to_I);
    tcase_add_test (tc_add, test_roman_calc_add_V_to_V);
    tcase_add_test (tc_add, test_roman_calc_add_V_to_X);
    tcase_add_test (tc_add, test_roman_calc_add_V_to_C);
    tcase_add_test (tc_add, test_roman_calc_add_V_to_D);
    tcase_add_test (tc_add, test_roman_calc_add_V_to_M);
    tcase_add_test (tc_add, test_roman_calc_add_X_to_I);
    tcase_add_test (tc_add, test_roman_calc_add_X_to_V);
    tcase_add_test (tc_add, test_roman_calc_add_X_to_C);
    tcase_add_test (tc_add, test_roman_calc_add_X_to_D);
    tcase_add_test (tc_add, test_roman_calc_add_X_to_M);
    tcase_add_test (tc_add, test_roman_calc_add_L_to_I);
    tcase_add_test (tc_add, test_roman_calc_add_L_to_V);
    tcase_add_test (tc_add, test_roman_calc_add_L_to_X);
    tcase_add_test (tc_add, test_roman_calc_add_L_to_L);
    tcase_add_test (tc_add, test_roman_calc_add_L_to_C);
    tcase_add_test (tc_add, test_roman_calc_add_L_to_D);
    tcase_add_test (tc_add, test_roman_calc_add_L_to_M);
    tcase_add_test (tc_add, test_roman_calc_add_C_to_I);
    tcase_add_test (tc_add, test_roman_calc_add_C_to_V);
    tcase_add_test (tc_add, test_roman_calc_add_C_to_X);
    tcase_add_test (tc_add, test_roman_calc_add_C_to_L);
    tcase_add_test (tc_add, test_roman_calc_add_C_to_D);
    tcase_add_test (tc_add, test_roman_calc_add_C_to_M);
    tcase_add_test (tc_add, test_roman_calc_add_D_to_I);
    tcase_add_test (tc_add, test_roman_calc_add_D_to_V);
    tcase_add_test (tc_add, test_roman_calc_add_D_to_X);
    tcase_add_test (tc_add, test_roman_calc_add_D_to_L);
    tcase_add_test (tc_add, test_roman_calc_add_D_to_C);
    tcase_add_test (tc_add, test_roman_calc_add_D_to_D);
    tcase_add_test (tc_add, test_roman_calc_add_D_to_M);
    tcase_add_test (tc_add, test_roman_calc_add_M_to_I);
    tcase_add_test (tc_add, test_roman_calc_add_M_to_V);
    tcase_add_test (tc_add, test_roman_calc_add_M_to_X);
    tcase_add_test (tc_add, test_roman_calc_add_M_to_L);
    tcase_add_test (tc_add, test_roman_calc_add_M_to_C);
    tcase_add_test (tc_add, test_roman_calc_add_M_to_D);
    tcase_add_test (tc_add, test_roman_calc_add_M_to_M);
    suite_add_tcase (testSuite, tc_add);
}

void addMultiCharacterAddTests(Suite* testSuite)
{
    TCase *tc_mc_add = tcase_create ("Multicharacter Addition");
    tcase_add_checked_fixture (tc_mc_add, setup, teardown);
    tcase_add_test (tc_mc_add, test_roman_calc_add_II_to_I);
    tcase_add_test (tc_mc_add, test_roman_calc_add_II_to_II);
    tcase_add_test (tc_mc_add, test_roman_calc_add_V_to_IV);
    tcase_add_test (tc_mc_add, test_roman_calc_add_XX_to_XX);
    tcase_add_test (tc_mc_add, test_roman_calc_add_L_to_XL);
    tcase_add_test (tc_mc_add, test_roman_calc_add_CC_to_CC);
    tcase_add_test (tc_mc_add, test_roman_calc_add_D_to_CD);
    tcase_add_test (tc_mc_add, test_roman_calc_add_CM_to_XLIX);
    tcase_add_test (tc_mc_add, test_roman_calc_add_XIV_to_LX);
    tcase_add_test (tc_mc_add, test_roman_calc_add_MMM_to_CMXCIX);
    suite_add_tcase (testSuite, tc_mc_add);
}

void addSubtractionTests(Suite* testSuite)
{
    TCase *tc_sub = tcase_create ("Subraction");
    tcase_add_checked_fixture (tc_sub, setup, teardown);
    tcase_add_test (tc_sub, test_roman_calc_sub_I_from_II);
    tcase_add_test (tc_sub, test_roman_calc_sub_XIV_from_LXXIV);
    tcase_add_test (tc_sub, test_roman_calc_sub_MMM_to_MMMCMXCIX);
    suite_add_tcase (testSuite, tc_sub);
}

void addFailureModeTests(Suite* testSuite)
{
    TCase *tc_fail = tcase_create ("Failure Mode");
    tcase_add_checked_fixture (tc_fail, setup, teardown);
    tcase_add_test (tc_fail, test_roman_calc_lower_case_input);
    tcase_add_test (tc_fail, test_roman_calc_add_empty_string);
    tcase_add_test (tc_fail, test_roman_calc_sub_empty_string);
    tcase_add_test (tc_fail, test_roman_calc_non_roman_characters);
    tcase_add_test (tc_fail, test_roman_calc_numerals_that_do_not_repeat);
    tcase_add_test (tc_fail, test_roman_calc_numerals_that_can_repeat);
    tcase_add_test (tc_fail, test_roman_calc_numerals_that_can_repeat_but_should_not);
    suite_add_tcase (testSuite, tc_fail);
}

Suite * roman_calc_suite (void)
{
    Suite *testSuite = suite_create ("Roman Calculator");

    addCoreTests(testSuite);
    addSingleCharacterAddTests(testSuite);
    addMultiCharacterAddTests(testSuite);
    addSubtractionTests(testSuite);
    addFailureModeTests(testSuite);

    return testSuite;
}

int main (void)
{
    int number_failed;
    Suite *s = roman_calc_suite ();
    SRunner *sr = srunner_create (s);
    srunner_run_all (sr, CK_NORMAL);
    number_failed = srunner_ntests_failed (sr);
    srunner_free (sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
